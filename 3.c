#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int upp=0, low=0, num=0, other=1;
    char password[1000];  // создаем массив и считываем введенный пароль, далее, с помощью функций if проверяем соответствие на длину, наличие верхнего и нижнего резистра букв, а также др символов таблицы ASCII 
    scanf("%s", &password);
    if (strlen(password) < 8 || strlen(password) > 14){
        printf ("NO");
        return 1;
    }
for (int i=0; i <= strlen(password)-1; i++){
    if(password[i] < 33 || password[i] > 126){
        other = 0;
    }
    if (islower(password[i])){
        low = 1;
    }
    if (isalpha(password[i])){
        upp = 1;
    }
    if (isdigit(password[i])){
        num = 1;
    }

}
    if (upp + low + num + other < 3){
        printf("NO\n");
        return 1;
    }
    else {
        printf("YES\n"); 
        return 0;
    }
}