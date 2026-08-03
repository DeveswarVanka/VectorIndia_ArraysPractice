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
        printf("Elements before right shifting : \n");
        for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
        int i=n-1;
        for(;i>0;i--)
        {
                arr[i]=arr[i-1];
        }
        arr[i] = 0;
        printf("\n Elements after right shifting : \n");
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
Elements before right shifting :
10 20 30 40 50
 Elements after right shifting :
0 10 20 30 40
*/