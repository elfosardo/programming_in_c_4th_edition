#include <stdio.h>

struct  time {
    int  hour;
    int  minutes;
    int  seconds;
};

struct time elapsed_time (struct time time1, struct time time2) {
    struct time time_diff;

    if ( time2.seconds < time1.seconds ) {
        time_diff.seconds = 60 + time2.seconds - time1.seconds;
        time1.minutes += 1;
    }
    else
        time_diff.seconds = time2.seconds - time1.seconds;

    if ( time2.minutes < time1.minutes ) {
        time_diff.minutes = 60 + time2.minutes - time1.minutes;
        time1.hour += 1;
    }
    else
        time_diff.minutes = time2.minutes - time1.minutes;

    if ( time2.hour < time1.hour )
        time_diff.hour = 24 + time2.hour - time1.hour;
    else
        time_diff.hour = time2.hour - time1.hour;

    return time_diff;
}

int main (void) {
    struct time time1, time2, time_diff;
    
    printf("Program to calculate the time elapsed between two times.\n");
    printf("Enter the first time in format hh:mm:ss\n");
    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);
    printf("Enter the second time in format hh:mm:ss:\n");
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

    time_diff = elapsed_time(time1, time2);

    printf("Time elapsed between the two times is: %i hours, %i minutes, %i seconds\n",
            time_diff.hour, time_diff.minutes, time_diff.seconds);

    return 0;
}
