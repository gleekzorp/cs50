#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key;
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {
                key = atoi(argv[1]);
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (isalpha(plaintext[i]))
            {
                if (islower(plaintext[i]))
                {
                    printf("%c", (((plaintext[i] - 97) + key) % 26) + 97);
                }
                else
                {
                    printf("%c", (((plaintext[i] - 65) + key) % 26) + 65);
                }
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}



// Code with some explanations

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key;
    if (argc == 2)
    {
        //Turns key into an int since it starts as a string
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {
                key = atoi(argv[1]);
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        // Asks user for the secret word or phrase
        string plaintext = get_string("plaintext: ");

        // Takes secret word or phrase and shifts it based on the key
        printf("ciphertext: ");
        // TODO:  Take the n = strlen(plaintext) out to speed up the process
        // That way it doesn't have to do that calculation everytime it loops
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (isalpha(plaintext[i]))
            {
                if (islower(plaintext[i]))
                {
                    // Grabs the letter at the i'th index
                    // Since its turned into a Char it can do the equation with its ascii number
                    // It will then do the math based on pemdas
                    printf("%c", (((plaintext[i] - 97) + key) % 26) + 97);
                }
                else
                {
                    printf("%c", (((plaintext[i] - 65) + key) % 26) + 65);
                }
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}


