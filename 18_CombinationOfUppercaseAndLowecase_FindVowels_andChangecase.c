/*wap to make the rand to generate a combination of uppercase and
lowercase alphabets and print all the vowels after changint the case in
 opposite.
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
                switch(isVowels(arr[i]))
                {
                        case 1 : arr[i] = arr[i] + 32;
                                 printf("%c",arr[i]);
                                 break;
                        case 2 : arr[i] = arr[i] + 32;
                                 printf("%c",arr[i]);
                                 break;
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
                case 'u' : return 2;
                           break;

                case 'A' :
                case 'E' :
                case 'I' :
                case 'O' :
                case 'U' : return 1;
        }
}
/*
Printing All array elements :
arr[0] = k
arr[1] = E
arr[2] = w
arr[3] = O
arr[4] = f
arr[5] = b
arr[6] = L
arr[7] = w
arr[8] = L
arr[9] = t
eo
*/