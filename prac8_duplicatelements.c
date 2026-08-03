#include<stdio.h>
void removeduplicates(int *arr,int n);
int main()
{
        int arr[5],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Elements are : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        removeduplicates(arr,n);
}
void removeduplicates(int *arr,int n)
{
        for(int i=0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(arr[i]==arr[j])
                        {
                                for(int k=j;k<(n-1);k++)
                                {
                                        arr[k] = arr[k+1];

                                }
                                n--;
                                j--;
                        }
                }
        }
        printf("Array Elements after duplicate removal : \n");
         for(int i=0;i<n;i++)
         {
                 printf("%d ",arr[i]);
         }
}
