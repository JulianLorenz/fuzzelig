#include "LineSegments.h"
#include "Triangle.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    Point * points;
    points = (Point*) calloc(3, sizeof(Point));
    points[0] = {-3,0};
    points[1] = {0,1};
    points[2] = {3,0};
    Triangle function(0,1,1);
    for(int i = -100; i<100; i++){
        float x = i*0.05;
        printf("%f | %f\n", x, function.f(x));
    }
    return 0;
}
