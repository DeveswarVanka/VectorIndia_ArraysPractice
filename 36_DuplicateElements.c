// array elements are
// 6 7 5 6 7 5 9 6 8 1 removing duplicates

// array elements after duplicate removal
// 6 7 5 9 8 1

#include<stdio.h>
#include<stdlib.h>
int n=10;//global variable,div:0, memory :datasegment
int main()
{
 srand(getpid());
 int arr[10];
 input(arr);
 printf("array elements are\n");
 print(arr);
 printf("removing duplicates\n");
 remove_duplicate(arr);
 printf("\narray elements after duplicate removal\n");
 print(arr);
}
void input(int *ptr)
{
 srand(getpid());
 for(int i=0;i<n;i++)
 {
 ptr[i]=rand()%10;
 }
}
void print(int *ptr)
{
 for(int i=0;i<n;i++)
 {
 printf("%d ",ptr[i]);
 }
}
void remove_duplicate(int *ptr)
{
 for(int i=0;i<n;i++)
 {
 for(int j=i+1;j<n;j++)
 {
 if(ptr[i]==ptr[j])
 {//duplicate
 for(int k=j;k<(n-1);k++)
 {
 ptr[k]=ptr[k+1];
 }
 n--;
 j--;
 }
 }
 }
}
