#ifndef _INPUT_DIMENSION_H
#define _INPUT_DIMENSION_H

#include <stdio.h>
#include <vector>

#include "membershipfunctions/MembershipFunction.h"

using std::vector;

class InputDimension{
    vector<MembershipFunction*> members;
public:
    InputDimension();
    void addMembershipFunction(MembershipFunction * function);
    float getMemberValue(int id, float crispValue);
};

#endif
