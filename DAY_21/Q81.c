// Write a program to Find string length without strlen().

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter characters \n");
    fgets(str,sizeof(str),stdin);// use fget to count spaces also

    int count = 0;
   for (int i = 0; i <= count; i++)
   {
    if (str[i] == '\n' )// fgets also store \n thud we are not useing '\0'
    {
        break;
    }
    count++;
   }
   
   printf("string length => %d",count);

   return 0;
}