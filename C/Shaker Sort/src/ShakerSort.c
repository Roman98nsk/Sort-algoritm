#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size = 0;

    printf("Введите размерность массива: ");
    scanf("%d", &size);

    int left = 0, right = size - 1;
    int x[size];

    srand(time(NULL));
    printf("Изначальный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i] = 2 + rand() % 100);
    }
    printf("\n");
   
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

    printf("Отсортированный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}