#include <stdio.h>
int main() {
    int month, year;
    scanf ("%d %d", &month, &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){ // в эти месяца кол-во дней фиксированно = 31
        printf ("%d\n", 31);
    }
    if (month == 4 || month == 6 || month == 9 || month == 11){ // в эти месяца кол-во дней фиксированно = 30
        printf("%d\n", 30 );
    }
    if (month == 2){
        if (year % 4 == 0){ // в феврале 29 дней, если год високосный(год считается високосным, если он без остатка делится на 4)
            printf ("%d\n", 29);
        }
        else {
            printf ("%d\n", 28); // в феврале 28 дней, если год обычный(то есть год с остатком делится на 4)
        }
    }
}