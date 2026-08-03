#include<stdio.h>
void removenonrepeatedele(int *arr,int n);
int main()
{
        int arr[7],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Elements are : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        removenonrepeatedele(arr,n);
}
void removenonrepeatedele(int *arr,int n)
{
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
                for(int k=i;k<(n-1);k++)
                {
                    arr[k] = arr[k+1];

                }
                n--;
                i--;
                }
        }
        printf("Array Elements after removing non repeated elements : \n");
         for(int i=0;i<n;i++)
         {
                 printf("%d ",arr[i]);
         }
}