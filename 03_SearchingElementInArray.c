#include<stdio.h>
int main()
{
        int arr[5],n,ele,flag=0;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",arr+i);
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
                        flag=1;
                        printf("found at index : %d\n",i);
                }
        }
        if(flag==0)
        {
                printf("%d is not found \n",ele);
        }
        return 0;
}
/*
Output-1:
Enter all elements :
22
32
12
34
54
Elements are :
arr[0] = 22
arr[1] = 32
arr[2] = 12
arr[3] = 34
arr[4] = 54
Enter the element to search for :
40
40 is not found

Output2:-
Enter all elements :
23
45
67
89
44
Elements are :
arr[0] = 23
arr[1] = 45
arr[2] = 67
arr[3] = 89
arr[4] = 44
Enter the elemenet to search for :
45
found at index : 1
*/
