#include<stdio.h>
void checkPalindrome(int a[],int size);
int main()
{
        int arr[5],n;
        n=sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Palindrome Numbers are : \n");
        checkPalindrome(arr,n);
}
void checkPalindrome(int a[],int size)
{
        for(int i=0;i<size;i++)
        {
                int rev=0;
                int temp=a[i];
                while(a[i]>0)
                {
                        rev = rev * 10 + a[i]%10;
                        a[i]/=10;
                }
                if(rev==temp)
                {
                        printf("%d\n",temp);
                }
        }
}
/*
Enter all elements :
101
10
800
808
202
Palindrome Numbers are :
101
808
202
*/