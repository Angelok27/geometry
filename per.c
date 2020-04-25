#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "geom.h"

void intersects(Circle* c, int j, int n)
{
    float sum, d;
    for (int i = 0; i < n; i++) {
        if (j != i) {
            d = sqrt((c->x[j] - c->x[i]) * (c->x[j] - c->x[i])
                           + (c->y[j] - c->y[i]) * (c->y[j] - c->y[i]));
            sum = c->r[j] + c->r[i];
            if (sum >= d) {
                printf("\n");
                printf("Circle intersects with: %d. circle \n",  i);
            } 
        }
    }
    printf("\n");
}
