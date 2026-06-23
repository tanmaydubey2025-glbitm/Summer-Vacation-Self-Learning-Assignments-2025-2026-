// Write a program to Find first repeating character.

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the string:\n");
    fgets(chr,sizeof(chr),stdin);
    
    int count = 0; 
    while (chr[count] != '\n' && chr[count] != '\0')
    {
        count++;
    }
    
    for (int i = 0; i < count; i++)
    {
        if (chr[i] != ' ')
        {
            
        
        
        int freq = 0;
        for (int j = 0; j < count; j++)
        {
            if (chr[j] == chr[i])
                {
                  freq++;
                }

        }

        if (freq > 1)
        {
            printf("%c",chr[i]);
            break;
        }
        
        }
    }
    return 0;
}
