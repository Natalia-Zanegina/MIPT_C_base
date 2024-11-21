#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

#define NAME 50
#define TOTAL 13

int main(int argc, char* const *argv)
{
    if (argc <= 1)
    {
        printf("-h: help\n-f: enter filename\n-m: enter month number\n");
        return 0;
    }
        

    int8_t r = 0;
    char name[NAME] = { 0 };
    uint8_t month_num = 0;
    opterr = 0;

    while ((r = getopt(argc, argv, "hf:m::")) != -1)
    {
        switch (r)
        {
            case 'h':
                printf("-h: help\n-f: enter filename\n-m: enter month number\n");
                return 0;
            case 'f':
                strcpy(name, optarg);
                break;   
            case 'm':
                month_num = atoi(optarg);
                break;
            case '?':
                printf("-h: help\n-f: enter filename\n-m: enter month number\n");
                return 0;
        }
    }
    
    if (month_num)
    {
        record_t* month_result = malloc(sizeof(record_t));
        calculate_a_month(month_num, month_result, name);
        print_a_month(month_num, month_result);
        free(month_result);
    }
    else
    {
        record_t* year_result[TOTAL];
        calculate_a_year(year_result, name);
        print_a_year(year_result);
    }

    return 0;
}