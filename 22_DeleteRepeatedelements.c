#include<stdio.h>
void findnonrepeatedelements(int *arr,int n);
int main()
{
        int arr[7],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        findnonrepeatedelements(arr,n);
}

void findnonrepeatedelements(int *arr,int n)
{
        int arr2[n],ele,prev;
        for(int i=0;i<n;i++)
        {
                arr2[i] = arr[i];
        }
        int size = n;
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
                if(count>1)
                {
                        if(ele==prev)
                        {
                                break;
                        }
                        else
                        {
                                prev=ele;
                        }
                        ele=arr[i];
                        for(int i=0;i<n;i++)
                        {
                                if(arr2[i]==ele)
                                {
                                        for(int j=i;j<(size-1);j++)
                                        {
                                        arr2[j] = arr2[j+1];
                                        }
                                prev = ele;
                                size--;
                                break;
                                }
                        }
                }
        }
        for(int i=0;i<size;i++)
        {
                printf("%d ",arr2[i]);
        }

}
/*
Enter all elements :
10
20
10
30
20
55
50
30 55 50
*/