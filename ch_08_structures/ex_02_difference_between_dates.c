#include <stdio.h>

struct  date {
    int  month;
    int  day;
    int  year;
};

int calcN (struct date date) {
    int N, f, g;

    if ( date.month <= 2 ) {
        f = date.year - 1;
        g = date.month + 13;
    }
    else {
        f = date.year;
        g = date.month + 1;
    }

    N = 1461 * f / 4 + 153 * g / 5 + date.day;

    return N;
}

int main (void) {
    struct date date1, date2;
    int N1, N2, days;
    
    printf("Program to calculate the number of days between 2 dates.\n");
    printf("Enter the first date in format dd/mm/yyyy:\n");
    scanf("%i/%i/%i", &date1.day, &date1.month, &date1.year);
    printf("Enter the second date in format dd/mm/yyyy:\n");
    scanf("%i/%i/%i", &date2.day, &date2.month, &date2.year);

    N1 = calcN(date1);
    N2 = calcN(date2);

    days = N2 - N1;

    printf("Number of days between the 2 dates is: %i\n", days);

    return 0;
}
