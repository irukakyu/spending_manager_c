#include "spending.h"

extern spending_t regist_spending() {
    spending_t spending;
    
    printf("勘定科目は？\n");
    scanf("%s", spending.account);
    printf("金額は？\n");
    scanf("%d", &spending.amount);
    printf("説明は？\n");
    scanf("%s", spending.description);

    return spending;
}

extern void print_spending(spending_t spending) {
    printf("%s,%d,%s\n", spending.account, spending.amount, spending.description);
}
