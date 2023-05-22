#include <stdio.h>
#include <string.h>

int isPalindrome(const char *string) {
    int length = strlen(string);
    int i, j;
    
    // Iterate from both ends of the string towards the middle
    for (i = 0, j = length - 1; i < j; i++, j--) {
        // If characters at current positions don't match, the string is not a palindrome
        if (string[i] != string[j]) {
            return 0; // Not a palindrome
        }
    }
    
    return 1; // Palindrome
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove trailing newline character from input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
