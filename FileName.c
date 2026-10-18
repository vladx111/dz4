#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "RUS");
    int A, B;
    int vhod;

    printf("ДОСТУП В КОВОРКИНГ\n");
    printf("Введите код со сканера лица (A) и код с карты (B): ");
     scanf_s("%d %d", &A, &B);
   

    vhod = ((A % 2 + B % 2) == 1);

    printf("Доступ разрешён : %d\n", vhod);

    return 0;
}
