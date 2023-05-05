#include <stdio.h>
int main() {
    int n, k, counter, day, i; 
    scanf("%d %d", &n, &k);
    counter = n; // начинаем со столбца, соответствующего дню недели, с которого начася месяц
    for (i = 1; i < n; i++) { // выводим n - 1 раз строку из трёх пробелов
        printf("   ");
    }
    for (day = 1; day <= k; day++) { // если выводимое число месяца от 1 до 9, то ставим перед ним еще один пробел
        if (day < 10) {
            printf(" ");
        }
        printf("%d", day);
        if (counter == 7) { // доходя до 7 столбца, сбрасываем счетчик до 1 и переходим на новую строку
            printf("\n");
            counter = 1;
        } else {
            printf(" ");
            counter += 1;
        }
    }
    if (counter != 1) { 
        printf("\n");
    }
}