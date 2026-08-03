#include<stdio.h>
#include<stdlib.h>
int findminelement(int *arr,int n);
int findmaxelement(int *arr,int n);

int main()
{
        int arr[10],n;
        n = sizeof(arr)/sizeof(arr[0]);
        srand(getpid());
        for(int i=0;i<n;i++)
        {
                arr[i] = rand()%21;
        }
        for(int i=0;i<n;i++)
        {
                printf("arr[%d] = %d\n",i,arr[i]);
        }
        int min = findminelement(arr,n);
        int max = findmaxelement(arr,n);
        printf("Min : %d\n",min);
        printf("Max : %d\n",max);
}
int findminelement(int *arr,int n)
{
        int min = arr[0];
        for(int i=0;i<n;i++)
        {
                if(arr[i]<min)
                {
                        min = arr[i];
                }
        }
        return min;
}
int findmaxelement(int *arr,int n)
{
        int max = arr[0];
        for(int i=0;i<n;i++)
        {
                if(arr[i]>max)
                {
                        max = arr[i];
                }
        }
        return max;
}
