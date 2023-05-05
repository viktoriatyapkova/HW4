#include <stdio.h>
int main () {
    int num, n, null=0, minus=0, plus=0; // num - число, которое мы вводим, n-кол-во чисел, которое будет вводиться, null - числа, которые равны 0, minus- отрицательный числа, plus - положительные числа
  scanf("%d", &n);
    for (int i=1; i <= n; i ++){
        scanf ("%d", &num);
        if(num==0){
            null += 1; // счетчик чисел, равных 0
        }
        if(num > 0){
            plus+= 1; // счетчик положительных чисел
        }
        if (num < 0){
            minus += 1; // счетчик отрицательных чисел
        }
    }
    printf("%d, %d, %d\n", null, plus, minus);
}

