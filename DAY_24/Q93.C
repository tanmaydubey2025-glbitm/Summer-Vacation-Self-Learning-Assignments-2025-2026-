// Write a program to Check string rotation
// ****revise few times****

#include <stdio.h>
int main(){
    char chr1[100],chr2[100];
    printf("Enter the string\n");
    scanf("%s",chr1);

    printf("Enter the string to check rotation\n");
    scanf("%s",chr2);
    
    
    int len1 = 0;
    while (chr1[len1] != '\0')
    {
        len1++;
    }
    chr1[len1] = '\0';
    
    int len2 = 0;
    while (chr2[len2] != '\0')
    {
        len2++;
    }
    chr2[len2] = '\0';

    if (len1 != len2)
    {
        printf("GIVEN STRINGS ARE NOT A ROTAION");
        return 0;
    }

    int rotation = 0;
    for (int i = 0; i < len2; i++)
    {
        int match = 1;
        for (int j = 0; j < len2; j++)
        {
            if (chr2[(i + j)%len2] != chr1[j])
            {
               match = 0;
               break;
            }
            
        }
        
        if (match == 1)
        {
            rotation = 1;
            break;
        }
        
        
    }
    

    if (rotation)
    {
        printf("GIVEN STRINGS ARE ROTATION");
    }else
    {
        printf("GIVEN STRINGS ARE NOT A ROTAION");
    }
    
    
    
    return 0;
}