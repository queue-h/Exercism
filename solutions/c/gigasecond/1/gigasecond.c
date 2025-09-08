#include "gigasecond.h"
#include <time.h>

void gigasecond(time_t input, char *output, size_t size) {
    time_t after = input + 1000000000;
    struct tm *new_time; // create calendar date
    new_time = gmtime(&after); // convert to utc
    strftime(output, size, "%Y-%m-%d %H:%M:%S", new_time);
}
