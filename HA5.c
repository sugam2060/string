#include <stdio.h>
#include <string.h>

void replaceSubstring(char *string, const char *substring, const char *newSubstring) {
    int stringLength = strlen(string);
    int substringLength = strlen(substring);
    int newSubstringLength = strlen(newSubstring);
    int i;
    // Temporary string to store the result
    char result[1000] = "";
    
    // Iterate through each character in the string
    for (i = 0; i < stringLength; ) {
        // Check if the current position matches the substring
        if (strncmp(string + i, substring, substringLength) == 0) {
            strcat(result, newSubstring); // Replace the substring with newSubstring
            i += substringLength; // Move to the next position after the replaced substring
        }
        else {
            strncat(result, string + i, 1); // Copy the current character to the result string
            i++; // Move to the next character in the string
        }
    }
    
    strcpy(string, result); // Copy the result string back to the original string
}

int main() {
    char input[1000];
    char substring[100];
    char newSubstring[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    printf("Enter the substring to replace: ");
    fgets(substring, sizeof(substring), stdin);
    
    printf("Enter the new substring: ");
    fgets(newSubstring, sizeof(newSubstring), stdin);
    
    // Remove trailing newline character from inputs
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    if (substring[strlen(substring) - 1] == '\n') {
        substring[strlen(substring) - 1] = '\0';
    }
    if (newSubstring[strlen(newSubstring) - 1] == '\n') {
        newSubstring[strlen(newSubstring) - 1] = '\0';
    }
    
    replaceSubstring(input, substring, newSubstring);
    
    printf("Result: %s\n", input);
    
    return 0;
}
