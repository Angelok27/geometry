#ifndef GEOM_H
#define GEOM_H
#define Pi 3.14

typedef struct { // определение структуры
    float R;
    float x;
    float y;

} Circle;

void Output_circle(Circle* qwerty_1, int j);
void Input_circle(Circle* qwerty, int j);

#endif
