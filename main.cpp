#include "membershipfunctions/LineSegments.h"
#include "membershipfunctions/Triangle.h"
#include "InputDimension.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    Point * points;
    points = (Point*) calloc(3, sizeof(Point));
    points[0] = {-3,0};
    points[1] = {0,1};
    points[2] = {3,0};
    Triangle function(0,0,1,1);

    InputDimension money;
    money.addMembershipFunction(new Triangle(0,1,1,1));
    money.addMembershipFunction(new Triangle(1,2,1,1));
    money.addMembershipFunction(new Triangle(2,3,1,1));
    money.addMembershipFunction(new Triangle(3,4,1,1));
    money.addMembershipFunction(new Triangle(4,5,1,1));

    for(int i = -100; i<100; i++){
        float x = i*0.05;
        printf("%f | %f\n", x, money.getMemberValue(3,x));
    }
    return 0;
}
