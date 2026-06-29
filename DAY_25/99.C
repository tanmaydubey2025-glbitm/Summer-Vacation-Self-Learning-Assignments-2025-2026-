// Write a program to Sort names alphabetically.

#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter number of names: \n");
    scanf("%d",&n);
    getchar();
    
    char names[10][100];
    char temp[100];
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++)
    {
        fgets(names[i],sizeof(names[i]),stdin);

        //remove new line char
        names[i][strcspn(names[i],"\n")] = '\0';
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if (strcmp(names[i],names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }

        }
        
    }
    

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",names[i]);
    }
    

    return 0;
}