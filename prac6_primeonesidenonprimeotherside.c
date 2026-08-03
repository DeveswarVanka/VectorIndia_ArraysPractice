#include<stdio.h>
void primeswap(int *arr,int n);
int is_prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[6],n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("Elements before changing positions : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Elements after changing positions : \n");
    primeswap(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void primeswap(int *arr,int n)
{
      int left = 0;

    for (int right = 0; right < n; right++)
    {
        if (is_prime(arr[right]))
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
        }
    }
}