#include <stdio.h>

// Recursive function to find sum of digits
int sumDigit(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumDigit(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigit(n));

    return 0;
}