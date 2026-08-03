#include<stdio.h>
void deleteArray(int *arr,int ele,int size);
int main()
{
  int arr[5]={10,20,30,40,50},ele=20,n;
  n = sizeof(arr)/sizeof(arr[0]);
  printf("Before deleting an element from the array : \n");
  for(int i=0;i<n;i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }
  printf("After deleting an element from the array : \n");
  deleteArray(arr,ele,n);
  for(int i=0;i<n;i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }
  return 0;
}
void deleteArray(int *arr,int ele,int size)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==ele)
    {
      for(int j=i;j<(size-1);j++)
      {
        arr[j] = arr[j+1];
      }
      size--;
    }
  }
}