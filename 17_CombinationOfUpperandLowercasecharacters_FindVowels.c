/*wap to make the rand to generate a combination of uppercase and
lowercase alphabets and print all the vowels.
*/
#include<stdio.h>
#include<stdlib.h>
int isVowels(char ch);
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
                if(isVowels(arr[i]))
                {
                        printf("%c",arr[i]);
                }
        }
}
int isVowels(char ch)
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
                case 'U' : return 1;
        }
        return 0;
}
/*
Printing All array elements :
arr[0] = G
arr[1] = L
arr[2] = g
arr[3] = g
arr[4] = q
arr[5] = U
arr[6] = L
arr[7] = n
arr[8] = C
arr[9] = Z
U
*/