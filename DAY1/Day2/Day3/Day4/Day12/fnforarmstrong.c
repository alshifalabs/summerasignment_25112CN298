#include <stdio.h>

// Function to check Armstrong number
int armstrong(int n)
{
    int temp, rem, sum = 0;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(temp == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}