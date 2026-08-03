#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int arr[] = {10, 11, 8, 7, 25, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result[n];
    int k = 0;

    // Copy prime elements
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            result[k++] = arr[i];
    }

    // Copy non-prime elements
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(arr[i]))
            result[k++] = arr[i];
    }

    printf("Array after arranging:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}