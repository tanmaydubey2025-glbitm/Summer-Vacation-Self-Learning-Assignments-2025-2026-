// Write a program to Convert lowercase to uppercase.
// basic A = 65 a = 97 , 97-65 = 32

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the chracters:\n");
    fgets(chr,sizeof(chr),stdin);

    int i = 0;
    while (chr[i] != '\n' && chr[i] != '\0')
    {
        if (chr[i] >= 'a' && chr[i] <= 'z')
        {
            chr[i] = chr[i] - 32;
        }
        
        i++;
    }
    
    printf("%s",chr);

    return 0;
}