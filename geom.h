#ifndef GEOM_H
#define GEOM_H
#define Pi 3.14

typedef struct { // определение структуры
    float r[256];
    float x[256];
    float y[256];

} Circle;

void Output_circle(Circle* qwerty_1, int j);
void Input_circle(Circle* qwerty, int j);
int area(Circle* c, int n);
int per(Circle* c, int n);
void intersects(Circle* c, int j, int n);
#endif
