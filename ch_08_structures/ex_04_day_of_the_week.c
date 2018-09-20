#include <stdio.h>

struct  date {
    int  month;
    int  day;
    int  year;
};

const char *day_of_the_week_names[] = {"Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

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

int calcDayOfTheWeek (int N) {
    int day_of_the_week;

    day_of_the_week = N % 7;

    return day_of_the_week;
}

int main (void) {
    struct date date1;
    int N, day_of_the_week;

    printf("Program that displays the day of the week.\n");
    printf("Enter the date in format dd/mm/yyyy:\n");
    scanf("%i/%i/%i", &date1.day, &date1.month, &date1.year);

    N = calcN(date1);
    
    day_of_the_week = calcDayOfTheWeek(N);

    printf("Day of the week: %s\n", day_of_the_week_names[day_of_the_week]);

    return 0;
}
