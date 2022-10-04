#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info() {
    printf("Сортировка расческой.\nМодификация пузырьковой. Идея в устранении маленьких значений в конце массива.\nФактор уменьшения - 1,247. Лучшее время - О(nlogn), худшее - O(n^2). Затраты памяти - О(1).");
}

void Input() {
    int size = 0;

    printf("Введите рамзерность массива: ");
    if (scanf("%d", &size) || size > 0) {
        int x[size];

        srand(time(NULL));
        printf("Первоначальный массив: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", x[i] = 2 + rand() % 100);
        }
        printf("\n");
    } else {
        printf("Некорректный ввод");
    }
}

void Comb(int size, int x[]) {
    const double factor = 1.247;

    //расстояние между итераторами
    int step = size - 1;

    while (step >= 1) {
        for (int i = 0; i + step < size; ++i) {
            if (x[i] > x[i + step]) {
                int tmp = x[i + step];
                x[i + step] = x[i];
                x[i] = tmp;
            }
        }
        step /= factor;
    }

    for (int i = 0; i + 1 < size; ++i) {
        for (int j = 0; j + 1 < size - i; ++j) {
            if (x[j + 1] < x[j]) {
                int tmp = x[j + 1];
                x[j + 1] = x[j];
                x[j] = tmp;
            }
        }
    }
}

void Output(int size, int x[]) {
    printf("Отсортированный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d", x[i]);
    }
    printf("\n");
}