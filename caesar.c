#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int key;

int main(int argc, string argv[]) //command line argument and array
{
    if (argc == 2) //if command link argument
    {
        key = atoi(argv[1]); //atoi stores string as int
        printf("plaintext:  ");
        string plain = get_string(); //get plaintext
        printf("ciphertext: ");

            for (int i = 0, n = strlen(plain); i < n; i++) //for each char in plaintext
            {
                if (plain[i] >= 'a' && plain[i] <= 'z') //if lowercase
                {
                    plain[i] = (((plain[i] - 97) + key) % 26) + 97; //mod 26 for alph size
                }
                if (plain[i] >= 'A' && plain[i] <='Z') //if uppercase
                {
                    plain[i] = (((plain[i] - 65) + key) % 26) + 65;
                }
                printf("%c", plain[i]); //print the character at index i
            }
            printf("\n"); //print newline
            return 0; //return working
    }
    else
    printf("Usage: ./caesar k\n");
    return 1; //return not working
}
