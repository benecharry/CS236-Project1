//
// Created by Benjamin  Echarry on 9/22/22.
//

#include "EmptyStringAutomaton.h"

void EmptyStringAutomaton::S0(){
    if (Match('\'')) {
        Next();
        S1();
    }
    else
        Serr();
}

void EmptyStringAutomaton::S1(){
    if (EndOfFile()) {
        Serr();
    }
    else if (Match('\'')) {
        return;
    }
    else {
        Serr();
    }
}