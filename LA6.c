#include <stdio.h>
#include <string.h>

void replaceCharacters(char *string, char character) {
    int length = strlen(string), i;
    
    for (i = 0; i < length; i++) {
        if (string[i] == character) {
            if (i >= 3) {
                string[i] = string[i - 3];
            }
        }
    }
}

int main() {
    char input[100];
    char character;
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove trailing newline character from input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    printf("Enter a character to replace: ");
    scanf("%c", &character);
    
    replaceCharacters(input, character);
    
    printf("Result: %s\n", input);
    
    return 0;
}
