#include "LineSegments.h"

LineSegments::LineSegments(Point * segmentPoints, int segmentPointCount){
    this->segmentPoints = segmentPoints;
    this->segmentPointCount = segmentPointCount;
}

LineSegments::~LineSegments(){
    free(segmentPoints);
}

float LineSegments::f(float x){
    int i;
    //If no points have been passed return 0
    if(segmentPointCount==0) return 0;
    //If only one point exists or x is left to the first point, return the value of the first point
    if(x<=segmentPoints[0].x || segmentPointCount == 1) return segmentPoints[0].y;
    //Check between which two points x is
    for(i=1;i<segmentPointCount;i++){
        if(segmentPoints[i-1].x<x && x <= segmentPoints[i].x){
            //x is in between here
            return (x-segmentPoints[i-1].x)*(segmentPoints[i].y-segmentPoints[i-1].y)/(segmentPoints[i].x-segmentPoints[i-1].x) + segmentPoints[i-1].y;
        }
    }
    //x is to the right of the last point. Return the value of the last point
    return segmentPoints[segmentPointCount-1].y;
}
