/*wap to input 10 characters randomly to the array and print the vowel after
changing the case*/
#include<stdio.h>
#include<stdlib.h>
int isVowels(char ch);
int main()
{
    char arr[10],n;
    srand(getpid());
    n=sizeof(arr)/sizeof(arr[0]);
    printf("Entering array elements using rand() function : \n");
    for(int i=0;i<n;i++)
    {
        arr[i] = rand()%26+97;
    }
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]= %c\n",i,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(isVowels(arr[i]))
        {
            arr[i]=arr[i]-32;
            printf("%c",arr[i]);
        }
    }
}
int isVowels(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': return 1;
    }
    return 0;
}
/*
Entering array elements using rand() function :
arr[0]= b
arr[1]= f
arr[2]= g
arr[3]= j
arr[4]= m
arr[5]= t
arr[6]= z
arr[7]= e
arr[8]= b
arr[9]= f
E
*/