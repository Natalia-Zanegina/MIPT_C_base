#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "temp_functions.h"

#define N 6
#define STRING 50
#define MONTHS 12
#define TOTAL 13
#define YEAR 2021


void calculate_a_month(int number, record_t* res, char* file)
{
    FILE* f_in;
    f_in = fopen(file, "r");

    if (f_in == NULL)
        return;

    int Y, M, D, H, MIN, T, r, line = 0;
    float sum = 0.f;
    int8_t min = 100, max = -100;

    res->Y = YEAR;

    while((r = fscanf(f_in, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &MIN, &T)) > 0)
    {
        line++;
        if (r == N)
        {
            if (M == number)
            {
                sum += T;

                if (T < min)
                    min = T;

                if (T > max)
                    max = T;

                res->NuValue++;
            }
        }
        else
        {
            char s[STRING] = { 0 };
            r = fscanf(f_in, "%[^\n]", s);
            if (M == number)
            {
                printf("ERROR in line %d: %s\n", line, s);
                res->ErValue++;
            }
                
        }        
    }
    
    if (res->NuValue)
    {
        res->T_AVER = sum / res->NuValue;
        res->T_MIN = min;
        res->T_MAX = max;
    }

    fclose(f_in);
}

void calculate_a_year(record_t** res, char* file)
{
    FILE* f_in;
    f_in = fopen(file, "r");

    if (f_in == NULL)
        return;

    int Y, M, D, H, MIN, T, r, line = 0;
    
    for (int i = 0; i < TOTAL; i++)
    {
        res[i] = malloc(sizeof(record_t));
        res[i]->Y = YEAR;
        res[i]->T_MIN = 100;
        res[i]->T_MAX = -100;
    }

    while((r = fscanf(f_in, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &MIN, &T)) > 0)
    {
        line++;
        if (r == N)
        { 
            res[M - 1]->T_AVER += T;

            if (T < res[M - 1]->T_MIN)
                res[M - 1]->T_MIN = T;

            if (T > res[M - 1]->T_MAX)
                res[M - 1]->T_MAX = T;

            res[M - 1]->NuValue++;

        }
        else
        {
            char s[STRING] = { 0 };
            r = fscanf(f_in, "%[^\n]", s);
            printf("ERROR in line %d: %s\n", line, s);
            res[M - 1]->ErValue++;
        }        
    }
    
    float sum = 0.f;
    res[TOTAL - 1]->T_MIN = 100;
    res[TOTAL - 1]->T_MAX = -100;

    for (int i = 0; i < MONTHS; i++)
    {
        res[i]->T_AVER /= res[i]->NuValue;

        if (res[i]->T_MIN < res[TOTAL - 1]->T_MIN)
                res[TOTAL - 1]->T_MIN = res[i]->T_MIN;

        if (res[i]->T_MAX > res[TOTAL - 1]->T_MAX)
                res[TOTAL - 1]->T_MAX = res[i]->T_MAX;

        sum += res[i]->T_AVER;
    }

    res[TOTAL - 1]->T_AVER = sum / MONTHS;
    
    fclose(f_in);
}

void print_a_month(int number, record_t* res)
{
    printf("#\tYear\tMonth\tNuValue\tErValue\tMonthAvg\tMonthMax\tMonthMin\n");
    
    printf("%d\t%d\t%d\t%d\t%d\t%.2f\t\t%d\t\t%d\n", number - 1, res->Y, number, res->NuValue, res->ErValue, res->T_AVER, res->T_MAX, res->T_MIN);
}

void print_a_year(record_t** res)
{
    printf("#\tYear\tMonth\tNuValue\tErValue\tMonthAvg\tMonthMax\tMonthMin\n");
    
    for (int i = 0; i < MONTHS; i++)
        printf("%d\t%d\t%d\t%d\t%d\t%.2f\t\t%d\t\t%d\n", i, res[i]->Y, i + 1, res[i]->NuValue, res[i]->ErValue, res[i]->T_AVER, res[i]->T_MAX, res[i]->T_MIN);

    printf("Year statistics: average is %.2f, max is %d, min is %d\n", res[TOTAL - 1]->T_AVER, res[TOTAL - 1]->T_MAX, res[TOTAL - 1]->T_MIN);
}