#include<stdio.h>
#include<stdlib.h>
int n=10;
int input(int *ptr);
int print(int *ptr);
int bubblesort(int *ptr);
int main()
{
        int arr[10];
        srand(getpid());
        input(arr);
        printf("Print array elements : \n");
        print(arr);
        bubblesort(arr);
        printf("/n After bubble sorting : \n");
        print(arr);
        return 0;
}
int input(int *ptr)
{
        srand(getpid());
        for(int i=0;i<n;i++)
        {
                ptr[i] = rand()%10;
        }
}
int print(int *ptr)
{
        for(int i=0;i<n;i++)
        {
                printf("%d",ptr[i]);
        }
}
int bubblesort(int *ptr)
{
        for(int i=n-1;i>=1;i--)
        {
                for(int j=0;j<i;j++)
                {
                        if(ptr[j] > ptr[j+1])
                        {
                        int temp = ptr[j];
                        ptr[j] = ptr[j+1];
                        ptr[j+1] = temp;
                        }
                }
        }
}
// Print array elements :
// 0098848125
// After bubble sorting :
// 0012458889