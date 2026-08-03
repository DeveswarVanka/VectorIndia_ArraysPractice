#include<stdio.h>
int main()
{
        int arr[5],n;
        n=sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",arr+i);
        }
        int ele,i,j;
        printf("Enter element : \n");
        scanf("%d",&ele);
        for(i=0;i<n;i++)
        {
                if(arr[i]==ele)
                {
                        for(j=i;j<(n-1);j++)
                        {
                                arr[j] = arr[j+1];
                        }
                        n--;
                }
        }
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
Enter element :
20
10 30 40 50 
*/