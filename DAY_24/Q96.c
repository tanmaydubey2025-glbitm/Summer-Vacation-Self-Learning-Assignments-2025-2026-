// Write a program to Remove duplicate characters.

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


    char no_duplicate[100];
    int k = 0;
    for (int i = 0; i < count; i++)
    {
        if(chr[i] != '\0' && chr[i] != ' '){
        int found = 0;
        for (int j = 0; j < k; j++)
        {
            if (no_duplicate[j] == chr[i])
            {
                found = 1;
                break;
            }
        
        }

        if (found == 0)
        {
            no_duplicate[k] = chr[i];
            k++;
        }
    }else
    {
        no_duplicate[k] = chr[i];
        k++;
    }
    
    }
    no_duplicate[k] = '\0';

    printf("%s", no_duplicate);
    
    return 0;
}