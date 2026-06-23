// Write a program to Count words in a sentence

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the sentence:\n ");
    fgets(chr,sizeof(chr),stdin);

    
    int i = 0;
    int word = 0;
    while (chr[i] != '\n' && chr[i] != '\0')
    {
        if ((chr[i] >= 'a' && chr[i] <= 'z') || 
            (chr[i] >= 'A' && chr[i] <= 'Z'))
        {
           if (i == 0 || chr[i -1] == ' ') // to check if last value start with space or 0
           {
            word++;
           }
           
        }
        
        i++;
    }
    
    printf("Number of words in the sentence = %d",word);

    return 0;
}