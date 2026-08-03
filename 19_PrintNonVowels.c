/*
wap to make the rand to generate a combination of uppercase and
lowercase alphabets and print all the vowels
*/
#include<stdio.h>
#include<stdlib.h>
int isNonVowels(char ch);
int main()
{
        char arr[10],n;
        srand(getpid());
        n = sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++)
        {
                if(rand()%2)
                {
                        arr[i] = rand()%26+65;
                }
                else
                {
                        arr[i] = rand()%26+97;
                }
        }
        printf("Printing All array elements : \n");
        for(int i=0;i<n;i++)
        {
                printf("arr[%d] = %c\n",i,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
                if(isNonVowels(arr[i]))
                {
                        printf("%c",arr[i]);
                }
        }
}
int isNonVowels(char ch)
{
        switch(ch)
        {
                case 'a' :
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' :
                case 'A' :
                case 'E' :
                case 'I' :
                case 'O' :
                case 'U' : return 0;
        }
        return 1;
}
/*
Printing All array elements :
arr[0] = Q
arr[1] = h
arr[2] = L
arr[3] = s
arr[4] = r
arr[5] = C
arr[6] = h
arr[7] = y
arr[8] = Q
arr[9] = U
QhLsrChyQ
*/