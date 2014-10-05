#include <math.h>
#include "shapes.h"

double distance(struct point2d u, struct point2d v) {
    double oneside = sqrt(pow(u.x-v.x, 2) + pow(u.y-v.y, 2));
    return oneside;
}
