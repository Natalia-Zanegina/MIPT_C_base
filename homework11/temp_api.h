#include <stdint.h>

typedef struct record{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hours;
    uint8_t minutes;
    int8_t temperature;
} record_t;


void calculate_a_month_average(int, record_t*, char*);
void calculate_a_month_min(int, record_t*, char*);
void calculate_a_month_max(int, record_t*, char*);
void calculate_a_year_average(record_t**, char*);
void calculate_a_year_min(record_t**, char*);
void calculate_a_year_max(record_t**, char*);