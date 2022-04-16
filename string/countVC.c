// C program to count the number of
// vowels and consonants in a string

#include <stdio.h>

// Function to count number
// of vowels and consonant
void count_vowels_and_consonant(char *str)
{
    // Declare the variable vowels and consonant
    int vowels = 0, consonants = 0;

    int i;
    char ch;

    // Take each character from this string to check
    for (i = 0; str[i] != '\0'; i++)
    {

        ch = str[i];

        // If this character is a vowel,
        // increment the count of vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;

        // If this character is a space
        // skip it
        else if (ch == ' ')
            continue;

        else
            // Else increment the count of consonants
            consonants++;
    }

    // Print the total count of vowels and consonants
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}

// Driver function.
int main()
{
    char string[100];
    printf("Enter String : ");

    gets(string);
    printf("String: %s\n", string);
    count_vowels_and_consonant(string);
    return 0;
}
