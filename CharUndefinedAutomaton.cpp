//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "CharUndefinedAutomaton.h"

void CharUndefinedAutomaton::S0(){
        if((!isalnum(Current())) or (!isspace(Current())))
            Next();
        return;
}