#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] < 'A' || str[i] > 'Z') &&
                 (str[i] < 'a' || str[i] > 'z'))
            special++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}
