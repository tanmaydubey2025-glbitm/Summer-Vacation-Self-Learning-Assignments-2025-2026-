// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // header for uppercase etc.
char str[100];

void inputdtring(){
    getchar();

    printf("Enter the string");
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1]== '\n')
    {
        str[len-1] = '\0';
    }
    
}

void display(){
    
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}


void reverse(){
    int len = strlen(str);

    for (int i = 0; i < len/2; i++)
    {
       
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    
    }
    printf("\nstring Reversed \n");
    display();
    
}

void palindrome(){
    int len = strlen(str);

    int isPalindrome = 0;
    for (int i = 0; i < len/2; i++)
    {
        if (str[i] == str[len - i- 1])
        {
            isPalindrome = 1;
            break;
        }
        
    }
    if (isPalindrome == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

void uppercase(){
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
    printf("\nstring converted to Uppercase\n");
    display();
}

void lowercase(){
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("\nstring converted to Lowercase\n");
    display();
}


void vowel(){
    int vowel = 0;
    int consonants = 0;

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char c = tolower(str[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
           vowel++;

        }else if ( c >= 'a' && c <= 'z')
        {
            consonants++;
        }
    
    }
    printf("Vowels = %d, Consonants = %d\n", vowel, consonants);
}

int main(){
    int choice;

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Reverse String\n");
        printf("4. Check Palindrome\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Count Vowels and Consonants\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1: inputdtring(); break;
            case 2: display(); break;
            case 3: reverse(); break;
            case 4: palindrome(); break;
            case 5: uppercase(); break;
            case 6: lowercase(); break;
            case 7: vowel(); break;
            case 8: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 8);

    return 0;
}
