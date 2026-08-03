#include<stdio.h>
int main()
{
    int arr[7],n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Printing Array Elements : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n Printing Array Elements in reverse order \n");
    for(int i=(n-1);i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
/*
Enter array elements :
10
20
30
40
50
60
70
Printing Array Elements :
10 20 30 40 50 60 70
 Printing Array Elements in reverse order
70 60 50 40 30 20 10
*/