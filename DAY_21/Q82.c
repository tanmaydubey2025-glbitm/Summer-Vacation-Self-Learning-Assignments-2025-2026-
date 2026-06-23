// Write a program to Reverse a string

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the characters: \n");
    fgets(str,sizeof(str),stdin);

    int count = 0;
    for (int i = 0; i <= count; i++)
    {
        if (str[i] == '\n' || str[i] == '\0')
        {
            break;
        }
        count++;
    }
    
    char chr_rev[100];
    for (int i = 0; i < count; i++)
    {
        chr_rev[((count - 1) - i)] = str[i];
    }
    
    chr_rev[count] = '\0';
    printf("%s ",chr_rev);

    return 0;
}