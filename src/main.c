#include <stdio.h>
#include <stdlib.h>
#include "spending.h"

int main(int argc, char const *argv[]) {

    int number;
    int num_of_spendings = 0;
    
    spending_t spendings[1024];

    while(1) {
        printf("1:登録 2:保留中のものを表示 3:書き込み 4:終了 \n");
        scanf("%d", &number);
        switch (number) {
        case 1:
            spendings[num_of_spendings] = regist_spending();
            num_of_spendings++;
            break;
        case 2:
            for(int i = 0; i < num_of_spendings; i++) {
                printf("%d,", i);
                print_spending(spendings[i]);
            }
            break;
        case 3:
            puts("未実装だよ");
            break;
        case 4:
            exit(EXIT_SUCCESS);
        default:
            break;
        };

    }

    return 0;
}
