// Write a program to Check palindrome string. 

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the characters:\n");
    fgets(chr,sizeof(chr),stdin);

    int count = 0;
    while (chr[count] != '\n' && chr[count] != '\0')
    {
        count++;
    }
    
    int PALINDROME = 1;
    for (int i = 0; i < (count); i++)
    {
        if (chr[ (((count-1)-i)) ] != chr[i])
        {
            PALINDROME = 0;
            break;
        }
        
    }

    if (PALINDROME == 1)
    {
        printf("%s is a palindrome",chr);
    }else
    {
        printf("%s is not a palindrome",chr);
    }
    
    
    return 0;
}