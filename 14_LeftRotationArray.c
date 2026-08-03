#include<stdio.h>
int main()
{
        int arr[5],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Elements are : \n");
        for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
        int i=0,var;
        var = arr[0];
        for(;i<(n-1);i++)
        {
                arr[i] = arr[i+1];
        }
        arr[i] = var;
        printf("\n Left Rotation Array One time : \n");
        for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
}
/*
Enter all elements :
10
20
30
40
50
Elements are :
10 20 30 40 50
Left Rotation Array One time :
20 30 40 50 10
*/