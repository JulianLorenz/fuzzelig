#ifndef _TRIANGLE_H
#define _TRIANGLE_H

#include "LineSegments.h"

class Triangle : public LineSegments{
private:
    float center;
    float rightLegLength;
    float leftLegLenth;

public:
    Triangle(float centerPeek, float leftLegLenth, float rightLegLength);
};

#endif
