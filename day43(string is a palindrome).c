#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("Not a palindrome.\n");
            return 0;
        }
    }

    printf("It's a palindrome!\n");
    return 0;
}
