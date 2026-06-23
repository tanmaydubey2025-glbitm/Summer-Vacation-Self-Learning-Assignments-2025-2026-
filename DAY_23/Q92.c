// Write a program to Find maximum occurring character

#include <stdio.h>
int main(){
    char chr1[100];

    printf("Enter the string:\n");
    fgets(chr1,sizeof(chr1),stdin);

    int count = 0; 
    while (chr1[count] != '\n' && chr1[count] != '\0')
    {
        count++;
    }
    chr1[count] = '\0';

    int maxfreq = 0;
    char maxchar;
    for (int i = 0; i < count; i++)
    {
        if (chr1[i] != ' ')
        {
            int present = 0;
            int freq = 0;
            for (int j = 0; j < i; j++)
            {
                if (chr1[i] == chr1[j])
                {
                    present = 1;
                    break;
                }
                
            }

            if (present == 1)
            {
               continue;
            }

            for (int j = i; j < count; j++)
            {
                if (chr1[i] == chr1[j])
                {
                    freq++;
                }
                
            }

            if (freq > maxfreq)
            {
                maxfreq = freq;
                maxchar = chr1[i];
            }
              
        }
        
    }

    printf("max freq:-\n");
    printf("%c => %d\n",maxchar,maxfreq);
    
    return 0;
}