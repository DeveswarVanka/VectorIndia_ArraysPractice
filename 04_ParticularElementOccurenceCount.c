/* wap to count the number of time the particular element is found in the
array */
#include<stdio.h>
int main()
{
        int arr[5],ele,n,count;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Elements are : \n");
        for(int i=0;i<n;i++)
        {
                printf("arr[%d] = %d\n",i,arr[i]);
        }
        printf("Enter the element to search for : \n");
        scanf("%d",&ele);
        for(int i=0;i<n;i++)
        {
                if(arr[i]==ele)
                {
                        count++;
                }
        }
        if(count==0)
        {
                printf("element is not found \n");
        }
        else
        {
                printf("found at %d times \n",count);
        }
        return 0;
}
/*
Enter all elements :
23
45
55
45
33
Elements are :
arr[0] = 23
arr[1] = 45
arr[2] = 55
arr[3] = 45
arr[4] = 33
Enter the element to search for :
45
found at 2 times
*/