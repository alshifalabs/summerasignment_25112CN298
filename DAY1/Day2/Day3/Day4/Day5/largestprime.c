#include <stdio.h>

int main()
{
    int num, i, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            int count = 0;

            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                    count++;
            }

            if(count == 2)
                largest = i;
        }
    }

    printf("Largest prime factor = %d", largest);

    return 0;
}