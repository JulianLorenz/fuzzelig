#include "InputDimension.h"

InputDimension::InputDimension(){

}

void InputDimension::addMembershipFunction(MembershipFunction *function){
    for(MembershipFunction * member : members){
        if(member->getMemberID()==function->getMemberID()){
            printf("Warning: Duplicate membership function id\n");
            return;
        }
    }
    members.push_back(function);
}

float InputDimension::getMemberValue(int id, float crispValue){
    for(MembershipFunction * member : members){
        if(member->getMemberID()==id){
            return member->f(crispValue);
        }
    }
    return -1;
}
