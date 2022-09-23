//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "AddAutomaton.h"

void AddAutomaton::S0(){
        if (Match('+')) {
            Next();
            return;
        }
        else {
            Serr();
        }
}