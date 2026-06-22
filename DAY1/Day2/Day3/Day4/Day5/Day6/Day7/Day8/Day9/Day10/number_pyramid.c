#include <stdio.h>

int main()
{
    int i, j, space;

    for(i = 1; i <= 5; i++)
    {
        // print spaces
        for(space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }

        // print increasing numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // print decreasing numbers
        for(j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}