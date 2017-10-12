#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string(); //string stored in s
    if (s != NULL) // if string is valid
    {
        if (s[0] != 32) //if first char is not a space
        {
            printf("%c", toupper(s[0])); //print FIRST char
        }   //after first char is printed loop through rest to find next char after space

            for (int i = 0; i < strlen(s); i++) //loop for length of string
            {
                if (s[i] == 32 && s[i+1] != 32 && s[i+1] != '\0')//if index is a space and the next index is not a space AND not nul \o
                {
                    printf("%c", toupper(s[i+1]));
                }
            }
    printf("\n");
    }
}