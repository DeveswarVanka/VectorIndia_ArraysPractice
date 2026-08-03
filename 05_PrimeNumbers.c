// wap to input 5 elments to the array and print all the elements which are'
// prime
#include<stdio.h>
int checkPrime(int num);
int main()
{
        int arr[5];
        printf("Enter all elements : \n");
        int n = sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("\n Prime Numbers : \n");
        for(int data=0;data<n;data++)
        {
                if(checkPrime(arr[data]))
                {
                        printf("%d\n",arr[data]);
                }
        }
}
int checkPrime(int num)
{
        int count=0;
        for(int i=1;i<=num;i++)
        {
                if((num%i)==0)
                {
                        count++;
                }
        }
        if(count==2)
        {
                return 1;
        }
        return 0;
}
/*
Enter all elements :
7
8
5
4
10

 Prime Numbers :
7
5
*/