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
    int key = atoi(argv[1]);
}