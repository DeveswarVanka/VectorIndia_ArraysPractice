#include<stdio.h>
#include<stdlib.h>
int *copyElements(int *arr,int n);
int main()
{
    int arr[10],*brr,n;
    n = sizeof(arr)/sizeof(arr[0]);
    srand(getpid());
    for(int i=0;i<n;i++)
    {
        arr[i] = rand()%100;
    }
    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    brr = copyElements(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("brr[%d] = %d\n",i,brr[i]);
    }
    return 0;
}
int *copyElements(int *arr,int n)
{
    static int brr[10];
    for(int i=0;i<n;i++)
    {
        brr[i] = arr[i];
    }
    return brr;
}
/*
arr[0] = 42
arr[1] = 24
arr[2] = 80
arr[3] = 92
arr[4] = 76
arr[5] = 46
arr[6] = 85
arr[7] = 55
arr[8] = 64
arr[9] = 92

brr[0] = 42
brr[1] = 24
brr[2] = 80
brr[3] = 92
brr[4] = 76
brr[5] = 46
brr[6] = 85
brr[7] = 55
brr[8] = 64
brr[9] = 92
*/
