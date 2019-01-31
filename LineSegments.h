#ifndef _LINE_SEGMENTS_H
#define _LINE_SEGMENTS_H

#include "MembershipFunction.h"
#include <stdlib.h>

typedef struct Point{
    float x;
    float y;
}Point;

class LineSegments : public MembershipFunction{
protected:
    Point * segmentPoints;
    int segmentPointCount;
public:
    LineSegments(Point * segmentPoints, int segmentPointCount);
    ~LineSegments();
    float f(float x);
};

#endif
