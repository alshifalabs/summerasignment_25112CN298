#include <stdio.h>

int main()
{
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if(sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}