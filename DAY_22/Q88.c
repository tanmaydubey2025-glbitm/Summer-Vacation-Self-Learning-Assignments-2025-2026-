// Write a program to Remove spaces from string. 

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);

    int count = 0;
    while (str[count] != '\n' && str[count] != '\0')
    {
        count++;
    }
    
    int j = 0;
    for (int i = 0; i < count; i++)
    {

        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        
    }
    str[j] = '\0'; // after loop array is shorter thus we need to terminate it
    

    printf("%s",str);
    

    return 0;
}