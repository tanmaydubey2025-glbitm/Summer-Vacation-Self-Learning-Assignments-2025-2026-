// Write a program to Character frequency

#include <stdio.h>
int main(){
    char chr[100];
    printf("Enter the Character:\n");
    fgets(chr,sizeof(chr),stdin);
    
    int count = 0;
    while (chr[count] != '\n' && chr[count] != '\0')
    {
        count++;
    }
    


    for (int i = 0; i < count; i++)
    {
        if ((chr[i] >= 'a' && chr[i] <= 'z') ||
            (chr[i] >= 'A' && chr[i] <= 'Z'))
        {
            
        int found = 0;
        int a =0;
        
       int present = 0;
        for (int j = 0; j < i; j++)
        {
            if (chr[i] == chr[j])
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
            
            if (chr[i] == chr[j])
            {
                a++;
            }
            
        }
        
        printf("%c => %d \n",chr[i],a );

        
        }
        
        
    }
    
    

    return 0;
}