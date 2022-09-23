//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "IDAutomaton.h"
void IDAutomaton::S0(){
    if (isalpha(Current())) {
        Next();
        S1();
    }
    else
        Serr();
}

void IDAutomaton::S1(){
    if (EndOfFile()) {
        return;
    }
    else if (isalnum(Current())) {
        Next();
        S1();
    }
    else
        return;
}