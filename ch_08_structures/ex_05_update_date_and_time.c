#include <stdio.h>
#include <stdbool.h>

struct  date
{
    int  month;
    int  day;
    int  year;
};

struct  time
{
    int  hour;
    int  minutes;
    int  seconds;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

// Function to update the time by one second

struct time  timeUpdate (struct time  now)
{
    ++now.seconds;

    if ( now.seconds == 60 )  {     // next minute
        now.seconds = 0;
        ++now.minutes;

        if ( now.minutes == 60 ) {  // next hour
            now.minutes = 0;
            ++now.hour;

            if ( now.hour == 24 ) // midnight
               now.hour = 0;
        }
    }

    return now;
}

// Function to calculate tomorrow's date

struct date  dateUpdate (struct date  today)
{
    struct date  tomorrow;
    int  numberOfDays (struct date  d);

    if ( today.day != numberOfDays (today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 )  {   // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {                             // end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

int  numberOfDays  (struct date  d)
{
     int  days;
     bool isLeapYear (struct date  d);
     const int  daysPerMonth[12] =
       { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

     if ( isLeapYear (d)  &&  d.month == 2 )
         days = 29;
     else
         days = daysPerMonth[d.month - 1];

     return days;
}

// Function to determine if it's a leap year

bool  isLeapYear (struct date  d)
{
    bool  leapYearFlag;

    if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  ||
                  d.year % 400 == 0 )
        leapYearFlag = true;   // It's a leap year
    else
        leapYearFlag = false;  // Not a leap year

    return leapYearFlag;
}

struct dateAndTime clockKeeper (struct dateAndTime mydate)
{
    struct dateAndTime newdate;
    newdate.stime = timeUpdate(mydate.stime);

    if ( newdate.stime.hour == 0 && newdate.stime.minutes == 0 && newdate.stime.seconds == 0 )
        newdate.sdate = dateUpdate(mydate.sdate);

    return newdate;
}

int main (void)
{
    struct dateAndTime mydate, newdate;

    printf("Enter the date and time in the format hh:mm:ss dd/mm/yyyy \n");
    scanf("%i:%i:%i %i/%i/%i", &mydate.stime.hour, &mydate.stime.minutes, &mydate.stime.seconds,
            &mydate.sdate.day, &mydate.sdate.month, &mydate.sdate.year);

    newdate = clockKeeper(mydate);

    printf("New date and time: %i:%i:%i %i/%i/%i\n", newdate.stime.hour, newdate.stime.minutes,
            newdate.stime.seconds, newdate.sdate.day, newdate.sdate.month, newdate.sdate.year);

    return 0;
}





