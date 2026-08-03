#include<stdio.h>
void rightshiftarray(int *a,int nosh,int n);
int main()
{
  int arr[5] = {10,20,30,40,50},nosh=2,size;
  size = sizeof(arr)/sizeof(arr[0]);
  printf("Elements before left shift operation : \n");
  for(int i=0;i<size;i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }
  printf("Elements after left shift operation : \n");
  rightshiftarray(arr,nosh,size);
  for(int i=0;i<size;i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }
}
void rightshiftarray(int *a,int nosh,int n)
{
  while(nosh>0)
  {
  int i;
  for(i=n;i>0;i--)
  {
    a[i] = a[i-1];
  }
  a[i] = 0;
  nosh--;
  }
}