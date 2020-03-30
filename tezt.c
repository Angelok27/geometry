//задаем определяем
#include "geom.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void Output_circle(Circle* qwerty_1, int j)
{
    // порядковый номер окружности, который мы задаем
    printf("%d. Окружность: ", j); // например, 1. окружность:()
    printf("(%f %f, %.1f)\n", qwerty_1->x, qwerty_1->y, qwerty_1->R); // вводим
    //координаты центра и радиуса окружностей такое кол-во сколько задали
    // увеличение кол-ва кругов
}

void Input_circle(Circle* qwerty, int j)
{
    int err;
    // for (int i = 0; i < n; i++) {
    printf("Введите координаты центра X и Y: \n");
    err = scanf("%e %e", &qwerty->x, &qwerty->y); // не переписываем весь scanf
    // а присваеваем переменной
    if (err != 2) { // 2 значения переменной
        printf("Введено неверно...\n");
        exit(0);
    }
    printf("Введите радиус: \n");
    err = scanf("%f", &qwerty->R);
    if ((err != 1) || (qwerty->R <= 0)) { // err!= 1 значение переменной
        printf("Введено неверно...\n");
        exit(0);
    } else {
        Output_circle(qwerty, j);
    }
    //}
}
