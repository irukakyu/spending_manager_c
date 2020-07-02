#ifndef SPENDING_H
#define SPENDING_H

#include <time.h>

typedef enum {
    Food, // 食費、酒、タバコを含む
    Utility, // 光熱費
    Communication, // 通信費、携帯回線や自宅のインターネット回線、VPSやドメインの費用も含む
    Entertainment, // 遊興費、CDや動画、音楽のサブスクリプションなどを含む
    Transportation, // 交通費
} accounts;

typedef enum {
    JPY,
    USD,
    EUR
} currency;

typedef struct Spending {
    time_t time;
    char account[64];
    int amount;
    char description[1024];
} spending_t;

extern spending_t regist_spending();
extern void print_spending(spending_t spending);

#endif