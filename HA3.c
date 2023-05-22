#include <stdio.h>
#include <string.h>

void printAlphabeticalOrder(char *string) {
    int length = strlen(string);
    int frequency[26] = {0}; // Frequency array for each alphabet
    int i;
    
    // Count the frequency of each alphabet in the string
    for (i = 0; i < length; i++) {
        char ch = string[i];
        
        if (ch >= 'A' && ch <= 'Z') {
            frequency[ch - 'A']++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++;
        }
    }
    
    // Print the alphabets in alphabetical order
    printf("Alphabetical order: ");
    
    for (i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c ", 'a' + i);
        }
    }
    
    printf("\n");
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove trailing newline character from input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    printAlphabeticalOrder(input);
    
    return 0;
}
