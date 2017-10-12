#include <cs50.h> //for get_float()
#include <stdio.h>
#include <math.h> //for round

int coins;
int quart = 25, dime = 10, nick = 5, cent = 1; //assing coin values for ease is not 0.25 as we rounded change by * 100
float change;
int change_int;

int main(void)
{
    do
    {
        printf("O Hai! how much change is owed?\n");
        change = get_float();
    }
    while (change < 0); //while change is less than 0 repeat

    change_int = round(change * 100); //rounded the float accurately to bypass inaccuracy of floats

    while (change_int / quart) //while change can be divided by 25, when it cant anymore go to next while
    {
        coins+=1; //Add one to coin
        change_int-=quart; //take 25 off change
    }
    while (change_int / dime) //same as above with 10 instead of 25
    {
        coins+=1;
        change_int-=dime;
    }
    while (change_int / nick) //repeat
    {
        coins+=1;
        change_int-=nick;
    }
    while (change_int / cent) //repeat
    {
        coins+=1;
        change_int-=cent;
    }
    printf("%i\n", coins); //print total amount of coins
}
