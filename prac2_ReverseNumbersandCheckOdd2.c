#include<stdio.h>
int oddReverse(int num);
int main()
{
  int arr[5]={14,23,19,62,45},n;
  n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++)
  {
    if(oddReverse(arr[i]))
    {
      printf("%d\n",arr[i]);
    }
  }
}
int oddReverse(int num)
{
  int temp = num;
  int rev = 0;
  while(num!=0)
  {
    rev = rev * 10 + num%10;
    num/=10;
  }
  num = temp;
  if(rev%2!=0)
  {
    return 1;
  }
  return 0;
}