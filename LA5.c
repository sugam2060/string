#include <stdio.h>
#include <ctype.h>
#include<string.h>
#define NUM_VOWELS 5

int isVowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase for comparison
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1; // Character is a vowel
    }
    
    return 0; // Character is not a vowel
}

int main() {
    char input[100];
    int vowelFreq[NUM_VOWELS] = {0}; // Frequency array for each vowel
    int consonantCount = 0,i;
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove trailing newline character from input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    // Iterate through each character in the input string
    for (i = 0; input[i] != '\0'; i++) {
        char ch = tolower(input[i]); // Convert character to lowercase
        
        // Check if character is a vowel
        if (isVowel(ch)) {
            switch (ch) {
                case 'a':
                    vowelFreq[0]++;
                    break;
                case 'e':
                    vowelFreq[1]++;
                    break;
                case 'i':
                    vowelFreq[2]++;
                    break;
                case 'o':
                    vowelFreq[3]++;
                    break;
                case 'u':
                    vowelFreq[4]++;
                    break;
            }
        }
        // Check if character is a consonant
        else if (isalpha(ch)) {
            consonantCount++;
        }
    }
    
    // Print the frequency of each vowel
    printf("Frequency of vowels:\n");
    printf("A: %d\n", vowelFreq[0]);
    printf("E: %d\n", vowelFreq[1]);
    printf("I: %d\n", vowelFreq[2]);
    printf("O: %d\n", vowelFreq[3]);
    printf("U: %d\n", vowelFreq[4]);
    
    // Print the total count of consonants
    printf("Total count of consonants: %d\n", consonantCount);
    
    return 0;
}

