#include <stdio.h>
#include "shapes.h"

double area(struct triangle t);
double perimeter(struct triangle t);

int main(void) {
    struct point2d u = {2., 2.};
    struct point2d v = {-2., 1.};
    struct point2d w = {0., -3.};       
    struct triangle t = {u, v, w};
    double areaT = area(t);
    double perimeterT = perimeter(t);
    printf("p = %f\n", perimeterT);
    printf("a = %f\n", areaT);
    double radiusCircle = ((2.*areaT)/perimeterT);
    printf("Radius of Circle inscribed into Triangle = %f\n", radiusCircle);
    return 0;
}
