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
        int nosh;
        printf("No.of positions to shift left : \n");
        scanf("%d",&nosh);
        while(nosh>0)
        {
                int i;
                for(i=0;i<(n-1);i++)
                {
                        arr[i] = arr[i+1];
                }
                arr[i] = 0;
                nosh--;
        }
        printf("Array after left shifting given no.of times : \n");
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
No.of positions to shift left :
2
Array after left shifting given no.of times :
30 40 50 0 0
*/