// Write a program to Compress a string

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the string\n");
    scanf("%s",chr);

    int len = 0;
    while (chr[len] != '\0')
    {
        len++;
    }
    chr[len] = '\0';

    int count = 1;
    for (int i = 0; i < len; i++)
    {
        if (chr[i] == chr[i+1])
        {
            count++;
        }else{
            printf("%c%d",chr[i],count);
            count = 1;
        }
        
    }
    


    return 0;
}