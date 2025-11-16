#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, max = 0, len;

    scanf("%s", s);  
    len = strlen(s);

    for(i = 0; i < len; i++) {
        int used[256] = {0};  
        for(j = i; j < len; j++) {
            if(used[s[j]])
                break;
            used[s[j]] = 1;
        }
        if(j - i > max)
            max = j - i;
    }

    printf("%d", max);
    return 0;
}
