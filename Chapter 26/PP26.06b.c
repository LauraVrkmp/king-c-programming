#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t current = time(NULL);
    char date_time[22];

    strftime(date_time, sizeof(date_time),
             "%a, %d %b %y %H:%M", localtime(&current));
    puts(date_time);

    return 0;
}