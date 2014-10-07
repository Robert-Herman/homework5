#include <math.h>
#include "shapes.h"

double distance(struct point2d u, struct point2d v);

double area(struct triangle t) {
    double areaT = fabs(0.5*(t.a.x*(t.b.y-t.c.y)+t.b.x*(t.c.y-t.a.y)+t.c.x*(t.a.y-t.b.y)));
    return areaT;
}

double perimeter(struct triangle t) {
    double perimeterT = (distance(t.a, t.b)+distance(t.a, t.c)+distance(t.b, t.c));
    return perimeterT;
}    
