#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//#define Pi 3.14
#include "geom.h"

int main()
{
    int n, err, j;
    printf("Введите количество кругов:\n");
    err = scanf("%d", &n);
    if (err != 1) {
        printf("Введено неверно...\n");
        exit(0);
    }
    // printf("Введите количество кругов: \n");

    for (j = 1; j <= n; j++) {
        Circle first;
        Input_circle(&first, j);
        printf("P = 2 * PI * R = %.4f \n", first.R * 2 * Pi);
        printf("S = PI * R * R = %.4f \n", first.R * first.R * Pi);
    }

    return 0;
}
