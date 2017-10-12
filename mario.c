#include <cs50.h>
#include <stdio.h>

int main(void) //hash = row + 2 spaces = opposite direcion row
{
    int height;
    int hash;
    int space;
    space = 0; //assign 0 to number of spaces
    hash = 0;//assign 0 to number of hashes
    do //Do while height is not between 0 - 23
    {
        printf("Height: ");
        height = get_int();
    }
    while (height > 23 || height < 0);

    for (int row = 0; row < height; row++) //amount of rows
    {
        hash = row + 1; //number of hashes needed per row
        space = height - row;//number of spaces needed per row

        for (int i = 1; i < space; i++)//indexed 1 so there is no space on last row
        {
            printf(" ");
        }
        for (int i = 0; i < hash; i++)//PRINT LEFT HASH
        {
            printf("#");
        }

        printf("  "); //GAP BETWEEN SIDES

        for (int i = 0; i < hash; i++)//REPRINT HASHES RIGHT SIDE
        {
            printf("#");
        }

        printf("\n");


    }

}