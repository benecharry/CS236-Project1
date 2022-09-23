//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "SchemesAutomaton.h"
void SchemesAutomaton::S0(){
    if (Match('S')) {
        Next();
        S1();
    }
    else
        Serr();
}

void SchemesAutomaton::S1(){
    if (Match('c')) {
        Next();
        S2();
    }
    else
        Serr();
}

void SchemesAutomaton::S2(){
    if (Match('h')) {
        Next();
        S3();
    }
    else
        Serr();
}

void SchemesAutomaton::S3(){
    if (Match('e')) {
        Next();
        S4();
    }
    else
        Serr();
}

void SchemesAutomaton::S4(){
    if (Match('m')) {
        Next();
        S5();
    }
    else
        Serr();
}

void SchemesAutomaton::S5(){
    if (Match('e')) {
        Next();
        S6();
    }
    else
        Serr();
}

void SchemesAutomaton::S6() {
    if (EndOfFile()) {
        Serr();
    } else if (Match('s')) {
        Next();
        return;
    } else {
        Serr();
    }
}