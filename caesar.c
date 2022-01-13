// this program encrypts a string by shifting the letter by a giving key

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("\nYou did not enter a valid argument...\n\n");
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {   
            if (isdigit(argv[i][j]) == 0)
            {
                printf("\nUsage: ./caesar key\n\n");
                return 1;
            }   
        }
    }
    int int_key = atoi(argv[1]);
    int key = int_key % 26;
    
    string plaintext = get_string("Plaintext:  ");
    printf("ciphertext: ");
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        int ciphertext = plaintext[i] + key;
        if (plaintext[i] <= 122 && plaintext[i] >= 97)
        {
            if (ciphertext > 122)
            {
                printf("%c", (ciphertext % 122) + 96);
            }
            else
            {
                printf("%c", ciphertext);    
            }
        }
        else if (plaintext[i] <= 90 && plaintext[i] >= 65)
        {
            if (ciphertext > 90)
            {
                printf("%c", (ciphertext % 90) + 64);
            }
            else
            {
                printf("%c", ciphertext);    
            }
        }
    }
    printf("\n");
}