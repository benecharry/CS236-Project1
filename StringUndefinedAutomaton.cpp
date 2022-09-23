//
// Created by Benjamin  Echarry on 9/22/22.
//

#include "StringUndefinedAutomaton.h"

void StringUndefinedAutomaton::S0(){
    if (Match('\'')) {
        Next();
        S1();
    }
    else
        Serr();
}

void StringUndefinedAutomaton::S1(){
    if (EndOfFile()) {
        return;
    }
    else if(Current() != '\''){
        Next();
        S1();
    }
    else
        Serr();
}