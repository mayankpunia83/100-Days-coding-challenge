// date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20] = "15/04/2025";
    char day[3], month[3], year[5];
    strncpy(day, date, 2); day[2] = '\0';
    strncpy(month, date + 3, 2); month[2] = '\0';
    strncpy(year, date + 6, 4); year[4] = '\0';
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m = atoi(month);
    printf("%s-%s-%s", day, months[m-1], year);
    return 0;
}
//It is used to convert a string (which contains numeric characters) into its corresponding integer value.

