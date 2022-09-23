//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "RulesAutomaton.h"

void RulesAutomaton::S0(){
    if (Match('R')) {
        Next();
        S1();
    }
    else
        Serr();
}

void RulesAutomaton::S1(){
    if (Match('u')) {
        Next();
        S2();
    }
    else
        Serr();
}

void RulesAutomaton::S2(){
    if (Match('l')) {
        Next();
        S3();
    }
    else
        Serr();
}

void RulesAutomaton::S3(){
    if (Match('e')) {
        Next();
        S4();
    }
    else
        Serr();
}

void RulesAutomaton::S4(){
    if (EndOfFile()) {
        Serr();
    }
    else if (Match('s')) {
        Next();
        return;
    }
    else {
        Serr();
    }
}
