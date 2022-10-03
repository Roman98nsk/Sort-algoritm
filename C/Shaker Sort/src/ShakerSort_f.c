#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info() {
    printf("Сортировка перемешиванием.\nПеремещение влево, вправо.\nСреднее время О(n^2). Затраты памяти О(1).");
}

void Input() {
    int size = 0;

    printf("Введите размерность массива: ");
    if (scanf("%d", &size) && size > 0) {

        int x[size];

        srand(time(NULL));
        printf("Изначальный массив: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", x[i] = 2 + rand() % 100);
        }
        printf("\n");
    } else {
        printf("Некорректный ввод.");
    }
}

void Shaker(int size, int x[]) {
    int left = 0, right = size - 1;

    while (left <= right) {
        for (int i = right; i > left; --i) {
            if (x[i - 1] > x[i]) {
                int tmp = x[i - 1];
                x[i - 1] = x[i];
                x[i] = tmp;
            }
        }
        ++left;

        for (int i = left; i < right; ++i) {
            if (x[i] > x[i + 1]) {
                int tmp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = tmp;
            }
        }
        --right;
    }
}

void Output(int size, int x[]) {
    printf("Отсортированный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}