//CLI PreWork: $ cd -> $ mkdir population -> $ cd population -> population/ $ wget https://cdn.cs50.net/2022/fall/labs/1/population.c  -> $ ls -> $ code population.c -> population/ $ make population -> population/ $ ./population*


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int s;
    do
    {
         s = get_int("Start Size: ");
    }
    while(s < 9);


    // TODO: Prompt for end size

      int e;
    do
    {
         e = get_int("End Size: ");
    }
    while(e < s);

    // TODO: Calculate number of years until we reach threshold

    int y = 0;

    do
    {
        s = s + (s/3) - (s/4);
        y++;
    }
    while(s < e);

    // TODO: Print number of years

printf("Years: %i\n", y);

}
