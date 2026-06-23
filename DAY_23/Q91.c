// Write a program to Check anagram strings. 

#include <stdio.h>
int main(){
    char chr1[100],chr2[100];

    printf("Enter the 1st string:\n");
    fgets(chr1,sizeof(chr1),stdin);

    printf("Enter the 2nd string:\n");
    fgets(chr2,sizeof(chr2),stdin);
    
    int count_1 = 0; 
    while (chr1[count_1] != '\n' && chr1[count_1] != '\0')
    {
        count_1++;
    }
    chr1[count_1] = '\0';

    int count_2 = 0; 
    while (chr2[count_2] != '\n' && chr2[count_2] != '\0')
    {
        count_2++;
    }
    chr2[count_2] = '\0';

    if (count_1 != count_2)
    {
        printf("GIVEN STRINGS ARE NOT ANAGRAM");
        return 0;
    }

    int anagram = 1;
    for (int i = 0; i < count_1; i++)
    {
        int present = 0;
        for (int j = 0; j < i; j++)
        {
            if(chr1[i] == chr1[j]){
                present = 1;
                break;
            }
        }

        if (present == 1)
        {
            continue;
        }
        
        int freq1 = 0;
        int freq2 = 0;
        for (int j = 0; j < count_1; j++)
        {
            if (chr1[j] == chr1[i])
            {
                freq1++;
            }
        }

        for (int j = 0; j < count_2; j++)
        {
            if (chr2[j] == chr1[i])
            {
                freq2++;
            }
        }
        
        if (freq1 != freq2)
        {
            anagram = 0;
        }
        
        
    }
    
    if (anagram == 1)
    {
        printf("GIVEN STRING IS AN ANAGRAM ");
    }else
    {
        printf("GIVEN STRING IS NOT AN ANAGRAM ");
    }
    

    return 0;
}