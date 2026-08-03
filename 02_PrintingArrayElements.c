#include<stdio.h>
int main()
{
        int arr[5],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",arr+i);
        }
        printf("Elements are : \n");
        for(int i=0;i<n;i++)
        {
                printf("arr[%d] = %d\n",i,arr[i]);
        }
}
/*
Enter all elements :
12
34
56
98
34
Elements are :
arr[0] = 12
arr[1] = 34
arr[2] = 56
arr[3] = 98
arr[4] = 34
*/