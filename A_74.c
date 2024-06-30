//Write a program to search a given pattern of characters within a given string.

#include <stdio.h> 
#include <string.h> 
#define MAX_LENGTH 100 
int main()  
{ 
    char text[MAX_LENGTH], pattern[MAX_LENGTH]; 
    int i, j, found = 0; 
    printf("Enter text: "); 
    scanf("%s", text); 
    printf("Enter pattern: "); 
    scanf("%s", pattern); 
    for (i = 0; i <= strlen(text) - strlen(pattern); i++)  
    { 
        for (j = 0; j < strlen(pattern); j++)  
        { 
            if (text[i + j] != pattern[j])  
            { 
                break; 
            } 
        } 
        if (j == strlen(pattern))  
        { 
            found = 1; 
            break; 
        } 
    } 
    if (found)  
    { 
        printf("Pattern found at index %d.\n", i); 
    } 
    else  
    { 
        printf("Pattern not found.\n"); 
    } 
    
    return 0; 
} 