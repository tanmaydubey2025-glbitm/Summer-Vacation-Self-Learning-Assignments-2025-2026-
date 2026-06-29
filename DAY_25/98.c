// Write a program to Find common characters in strings

#include <stdio.h>

int main(){
    char str1[100];
    printf("Enter first string:\n");
    scanf("%s",str1);

    char str2[100];
    printf("Enter second string:\n");
    scanf("%s",str2);

    int count_1 = 0;
    while (str1[count_1] != '\n' && str1[count_1] != '\0')
    {
        count_1++;
    }
    str1[count_1] = '\0';

    int count_2 = 0;
    while (str2[count_2] != '\n' && str2[count_2] != '\0')
    {
        count_2++;
    }
    str2[count_2] = '\0';
    
    printf("common characters in strings are := \n");
    for (int i = 0; i < count_1; i++)
    {
        int present = 0;
        int found = 0;

        for (int j = 0; j < i; j++)
        {
            if (str1[i] == str1[j])
            {
                present = 1;
                break;
            }
        }

        if (present == 1)
        {
            continue;
        }

        for (int j = 0 ; j < count_2; j++)
        {
           if (str1[i] == str2[j])
            {
                found = 1;
                break;
            }
                
        }
        
        if (found == 1)
        {
            printf("%c, ",str1[i]);
        }
        
        
    }
    

    return 0;
}