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
        printf("Array Elements before shifting : \n");
        for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
        int nosh;
        printf("\n Enter shift position : \n");
        scanf("%d",&nosh);
        while(nosh>0)
        {
                int i;
                for(i=(n-1);i>0;i--)
                {
                        arr[i] = arr[i-1];
                }
                arr[i] = 0;
                nosh--;
        }
        printf("Array Elements after shifting : \n");
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
Array Elements before shifting :
10 20 30 40 50
 Enter shift position :
2
Array Elements after shifting :
0 0 10 20 30 
*/