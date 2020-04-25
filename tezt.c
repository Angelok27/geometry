//задаем определяем
#include "geom.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Output_circle(Circle* qwerty_1, int j)
{
    // порядковый номер окружности, который мы задаем
    printf("\n");
    printf("%d. Окружность: ", j); // например, 1. окружность:()
    printf("\n");
    printf("(%f %f, %.1f)\n", qwerty_1->x[j], qwerty_1->y[j], qwerty_1->r[j]); // вводим
    //координаты центра и радиуса окружностей такое кол-во сколько задали
    // увеличение кол-ва кругов
}

void Input_circle(Circle* qwerty, int j)
{
    int err;
    printf("\n");
    printf("Введите координаты центра X и Y: \n");
    err = scanf("%e %e", &qwerty->x[j], &qwerty->y[j]); // не переписываем весь scanf
    // а присваеваем переменной
    if (err != 2) { // 2 значения переменной
        printf("Введено неверно...\n");
        exit(0);
    }
    printf("Введите радиус: \n");
    err = scanf("%f", &qwerty->r[j]);
    if ((err != 1) || (qwerty->r[j] <= 0)) { // err!= 1 значение переменной
        printf("Введено неверно...\n");
        exit(0);
    } else {
        Output_circle(qwerty, j);
    }

}
