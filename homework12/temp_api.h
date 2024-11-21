typedef struct sensor{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hours;
    uint8_t minutes;
    int8_t temperature;
} sensor_t;

typedef struct record{

    int Y;
    int NuValue;
    int ErValue;
    float T_AVER;
    int T_MIN;
    int T_MAX;

} record_t;

void add_record(sensor_t*, int, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, int8_t); // добавление записи
void remove_record(sensor_t*, int);                                                    // удаление записи
int create_arr(sensor_t*, char*);                                                      // создание массива структур из csv
void changeIJ(sensor_t*, int, int);                                                    // перестановка элементов массива 
void sort_by_temperature(int, sensor_t*);                                              // сортировка массива структур по температуре
void calculate_a_month(int, record_t*, char*);                                         // расчет среднемесячной температуры
void calculate_a_year(record_t**, char*);                                              // расчет среднегодовой температуры
void print_info(int, sensor_t*);                                                       // печать массива структур
void print_a_month(int, record_t*);                                                    // печать статистики за месяц
void print_a_year(record_t**);                                                         // печать статистики за год