#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    // Check if the letter is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("It is a vowel.\n");
    }
    else
    {
        printf("It is a consonant.\n");
    }

    return 0;
}