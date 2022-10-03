#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info() {
    printf("Сортировка пузырьком.\nНе применяется на практике.\nСреднее время выполнения О(n^2). Затраты памяти О(1).");
}

void Input(int size, int x[]) {
    srand(time(NULL));
    printf("Изначальный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i] = 2 + rand() % 1000);
    }
    printf("\n");
}

void Bubble(int size, int x[]) {
    for (int i = 0; i + 1 < size; i++) {
        for (int j = 0; j + 1 < size - i; j++){
            if (x[j + 1] < x[j]) {
                int tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
            }
        }
    }
}

void Output(int size, int x[]) {
    printf("Отсортированный массив: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", x[i]);
        }
    printf("\n");
}