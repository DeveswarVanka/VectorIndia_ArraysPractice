#include<stdio.h>
void leftrotationarray(int *a,int nosh,int n);
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
  leftrotationarray(arr,nosh,size);
  for(int i=0;i<size;i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }
}
void leftrotationarray(int *a,int nosh,int n)
{
  while(nosh>0)
  {
  int i,temp=a[0];
  for(i=0;i<(n-1);i++)
  {
    a[i] = a[i+1];
  }
  a[i] = temp;
  nosh--;
  }
}