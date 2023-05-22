#include <stdio.h>
#include <string.h>

void reverseWords(char *sentence) {
    int length = strlen(sentence);
    int start = 0,i;
    
    // Iterate through each character in the sentence
    for (i = 0; i <= length; i++) {
        // If a space or end of sentence is encountered, reverse the word
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int end = i - 1;
            
            // Reverse the characters of the word
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                
                start++;
                end--;
            }
            
            start = i + 1; // Move to the start of the next word
        }
    }
}

int main() {
    char input[100];
    
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove trailing newline character from input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    reverseWords(input);
    
    printf("Result: %s\n", input);
    
    return 0;
}
