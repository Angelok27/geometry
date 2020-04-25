#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//#define Pi 3.14
#include "geom.h"

int main ()
{
  int n, err;
  float p, s;
  printf("Введите количество кругов:\n");
  err = scanf("%d", &n);
  if (err != 1) {
      printf("Введено неверно...\n");
      exit(0);
  }

  for (int j = 1; j <= n; j++) {
    Circle c1;
    Input_circle(&c1, j);
    s = area(&c1, j);
    p = per(&c1, j);
    printf ("area = %f\n", s);
    printf ("perimetr = %f\n", p);
    intersects(&c1, j, n);

  }



  return 0;
}
