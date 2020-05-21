#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//#define Pi 3.14
#include "geom.h"

int area(Circle* c, int j)
{
    float area;
    area = c->r[j] * c->r[j] * Pi;
    return area;

}

int per(Circle* c, int j)
{
    float perimetr;
    perimetr = c->r[j] * 2 * Pi;
    return perimetr;
}
