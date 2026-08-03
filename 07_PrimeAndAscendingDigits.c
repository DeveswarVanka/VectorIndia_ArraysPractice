// wap to input 6 elements in the array and print all the elements which
// are prime and all elements are in ascending order
#include<stdio.h>
int checkPrime(int num);
int checkAscdigits(int num);
int main()
{
        int arr[6],n;
        n = sizeof(arr)/sizeof(arr[0]);
        printf("Enter all elements : \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Prime Numbers having digits in ascending order : \n");
        for(int data=0;data<n;data++)
        {
                if(checkPrime(arr[data]))
                {
                        if(checkAscdigits(arr[data]))
                        {
                                printf("%d\n",arr[data]);
                        }
                }
        }
}
int checkPrime(int num)
{
        int i;
        for(i=2;i<num;i++)
        {
                if((num%i)==0)
                {
                        break;
                }
        }
        if(i==num)
        {
                return 1;
        }
        return 0;
}
int checkAscdigits(int num)
{
        int prev = 9,current_digit;
        while(num>0)
        {
                current_digit = num % 10;
                if(current_digit <= prev)
                {
                        prev = current_digit;
                }
                else
                {
                        break;
                }
                num/=10;
        }
        if(num==0)
        {
                return 1;
        }
        return 0;
}
/*
Enter all elements :
17
18
13
11
23
36
Prime Numbers having digits in ascending order :
17
13
11
23
*/