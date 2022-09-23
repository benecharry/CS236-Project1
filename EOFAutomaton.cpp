//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "EOFAutomaton.h"

void EOFAutomaton::S0(){
    if (input.size()==1) {
        return;
    }
    else {
        Serr();
    }
}