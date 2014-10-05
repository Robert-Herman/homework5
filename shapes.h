struct point2d {
    double x;
    double y;
};
struct triangle {
    struct point2d a;
    struct point2d b;
    struct point2d c;
};
double distance(struct point2d u, struct point2d v);
double area(struct triangle t);
double perimeter(struct triangle t);
