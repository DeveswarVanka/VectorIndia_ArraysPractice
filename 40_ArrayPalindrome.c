#include<stdio.h>
int *reversearr(int *arr,int n);
int main()
{
    int arr[5],*rev,n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    rev = reversearr(arr,n);
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=rev[i])
        {
            flag=0;
        }
    }
    if(flag)
    {
        printf("Array is a palindrome \n");
    }
    else
    {
        printf("Array is not a palindrome \n");
    }
    return 0;
}
int *reversearr(int *arr,int n)
{
    static int rev[5];
    int i=n-1,j=0;
    for(;i>=0;i--)
    {
        rev[j++] = arr[i];
    }
    return rev;
}