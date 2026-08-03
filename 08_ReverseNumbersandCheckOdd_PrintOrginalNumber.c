#include<stdio.h>
int reverseNum(int num);
int checkOdd(int num);
int main()
{
        int arr[5],rev[5],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Reversed Number and odd : \n");
        for(int i=0;i<n;i++)
        {
                rev[i] = reverseNum(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
                if(checkOdd(rev[i])==1)
                {
                        printf("%d\n",arr[i]);
                }

        }
}
int reverseNum(int num)
{
        int rev = 0;
        while(num>0)
        {
                int digit=num%10;
                rev = rev * 10 + digit;
                num/=10;
        }
        return rev;
}
int checkOdd(int num)
{
                if(num%2!=0)
                {
                        return 1;
                }
                else
                {
                        return 0;
                }
}
/*
Enter all elements :
14
23
19
62
45
Reversed Number and odd :
14
19
*/