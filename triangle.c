#include <math.h>
#include "shapes.h"

double area(struct triangle t) {
    double areaT = fabs(0.5*( (t.c.x - t.a.x)*(t.b.y - t.a.y) + (t.c.y - t.a.y)*(t.b.x - t.a.x)));
    return areaT;
}

double perimeter(struct triangle t) {
    double perimeterT = (distance(t.a, t.b)+distance(t.a, t.c)+distance(t.b, t.c));
    return perimeterT;
}    
