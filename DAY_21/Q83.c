// Write a program to Count vowels and consonants.

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the characters:\n");
    fgets(chr,sizeof(chr),stdin);

    int v_count = 0;
    int c_count = 0;


    int i = 0;
    while(chr[i] != '\n' && chr[i] != '\0')
    {

        switch (chr[i])
        {
        case 'a':case 'A':
        case 'e':case 'E':
        case 'i':case 'I':
        case 'o':case 'O':
        case 'u':case 'U':

        v_count++;
            break;    

        default:

        if ((chr[i] >= 'A' && chr[i] <= 'Z') ||
            (chr[i]>= 'a' && chr[i] <= 'z'))
        {
           c_count++;
        }
        break;

        }

        i++;
            
    }

    printf("Vowels = %d\n", v_count);
    printf("Consonants = %d\n", c_count);

    return 0;
}