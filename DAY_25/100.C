// Write a program to Sort words by length. 

#include <stdio.h>
#include <string.h>

int main(){
    int n ;
    printf("Enter number of words:\n");
    scanf("%d",&n);
    getchar(); // terminate the newline left by scanf

    printf("\nEnter words\n");
    char words[10][100];
    char temp[100];
    for (int i = 0; i < n; i++)
    {
        fgets(words[i],sizeof(words[i]),stdin);

        //remove new line char , strcspn is used to return index like strcson(target,chracter);
        words[i][strcspn(words[i],"\n")] = '\0';
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = (0+i); j < n; j++)
        {
            if (strlen(words[i]) > strlen(words[j]))
            {
                stpcpy(temp,words[i]);
                stpcpy(words[i], words[j]);
                stpcpy(words[j],temp);
            }
            
        }
        
    }
    

    printf("\n words soretd by length \n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",words[i]);
    }
    
    


    return 0;
}