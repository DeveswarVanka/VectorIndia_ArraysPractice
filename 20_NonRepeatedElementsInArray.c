#include<stdio.h>
int main()
{
        int arr[7],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
                int count=0;
                for(int j=0;j<n;j++)
                {
                        if(arr[i]==arr[j])
                        {
                                count++;
                        }
                }
                if(count==1)
                {
                        printf("%d ",arr[i]);
                }
        }
}
/*
Enter elements :
10
20
10
30
20
50
55
30 50 55
*/