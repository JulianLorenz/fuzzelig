#include "Triangle.h"

Triangle::Triangle(int id, float center, float leftLegLenth, float rightLegLength)
    :LineSegments(id,NULL,0)
{
    this->center=0;
    this->leftLegLenth=0;
    this->rightLegLength=0;
    segmentPoints = (Point*) calloc(3,sizeof(Point));
    segmentPoints[0].x = center-leftLegLenth;
    segmentPoints[0].y = 0;
    segmentPoints[1].x = center;
    segmentPoints[1].y = 1;
    segmentPoints[2].x = center+rightLegLength;
    segmentPoints[2].y = 0;
    segmentPointCount = 3;
}
