typedef struct record{

    int Y;
    int NuValue;
    int ErValue;
    float T_AVER;
    int T_MIN;
    int T_MAX;

} record_t;

void calculate_a_month(int, record_t*, char*);
void calculate_a_year(record_t**, char*);
void print_a_month(int, record_t*);
void print_a_year(record_t**);