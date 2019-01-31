#ifndef _MEMBERSHIP_FUNCTION_H
#define _MEMBERSHIP_FUNCTION_H


class MembershipFunction{
private:
    int id;

public:
    MembershipFunction(int id){this->id = id;}
    virtual float f(float x)=0;
    inline int getMemberID(){return id;}
};

#endif
