//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "CommaAutomaton.h"

void CommaAutomaton::S0() {
    if (Current()==',') {
        Next();
        return;
    }
    else {
        Serr();
    }
}