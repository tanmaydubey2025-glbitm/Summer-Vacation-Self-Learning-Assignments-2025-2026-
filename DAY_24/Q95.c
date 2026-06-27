// Write a program to Find longest word
#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter a sentence: ");
    fgets(chr,sizeof(chr),stdin);
    
    int count = 0;
    while (chr[count] != '\0' && chr[count] != '\n')
    {
        count++;
    }
    chr[count] = '\0';
    
    int longWord = 0;
    int currlen = 0;
    int longstart = 0;
    for (int i = 0; i <= count; i++)
    {
        
        if (chr[i] != '\0' && chr[i] != ' ')
        {
            currlen++;
        }


        if (chr[i] == ' ' || chr[i]== '\0')
        {
            if (longWord < currlen)
            {
                longWord = currlen;
                longstart = i - currlen;
            }
            currlen = 0;
        }
        
    }

    printf("LONGEST WORRD: \n");
    for (int i = longstart; i < (longstart+longWord); i++)
    {
       printf("%c",chr[i]);
    }


    return 0;
}