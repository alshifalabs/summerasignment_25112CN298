#include <stdio.h>

int main()
{
    int arr[100], n, sum = 0, total, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n+1)*(n+2)/2;

    printf("Missing number = %d", total - sum);

    return 0;
}