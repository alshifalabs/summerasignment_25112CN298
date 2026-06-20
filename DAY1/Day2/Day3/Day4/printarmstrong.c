#include <stdio.h>

int main()
{
    int start, end, num, rem, sum;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers are: ");

    for(num = start; num <= end; num++)
    {
        int temp = num;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}