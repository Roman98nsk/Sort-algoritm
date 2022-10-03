#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/BubbleSort.h"

int main() {
    int size = 0;
    time_t start, end;
    Info();
    printf("Введите размерность массива (больше 0): ");
    
    if (scanf("%d", &size) || size > 0) {
        int x[size];

        Input(size, x);

        start = time(NULL);
        Bubble(size, x);

        Output(size, x);
        end = time(NULL);
        printf("Время сортировки %d элементов: %.5f\n", size, (end - start) * 1000.0);
    } else {
        printf("Некорректный ввод.\n");
    }
    return 0;
}
