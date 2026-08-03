#include<stdio.h>
#include<stdlib.h>
int is_vowel(char ch);
int main()
{
        char arr[10],n;
        srand(getpid());
        n = sizeof(arr)/sizeof(arr[0]);
        printf("entering array elements using rand() function : \n");
        for(int i=0;i<n;i++)
        {
                arr[i] = rand()%26+97;
        }
        printf("array elements are : \n");
        for(int i=0;i<n;i++)
        {
                printf("arr[%d] = %c\n",i,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
                if(is_vowel(arr[i]))
                {
                        printf("%c\n",arr[i]);
                }
        }
}
int is_vowel(char ch)
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
entering array elements using rand() function :
array elements are :
arr[0] = o
arr[1] = c
arr[2] = v
arr[3] = z
arr[4] = a
arr[5] = p
arr[6] = s
arr[7] = e
arr[8] = v
arr[9] = x
o
a
e
*/