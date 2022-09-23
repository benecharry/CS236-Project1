//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "FactsAutomaton.h"

void FactsAutomaton::S0(){
    if (Match('F')) {
        Next();
        S1();
    }
    else
        Serr();
}
void FactsAutomaton::S1(){
    if (Match('a')) {
        Next();
        S2();
    }
    else
        Serr();
}
void FactsAutomaton::S2(){
    if (Match('c')) {
        Next();
        S3();
    }
    else
        Serr();
}
void FactsAutomaton::S3(){
    if (Match('t')) {
        Next();
        S4();
    }
    else
        Serr();
}
void FactsAutomaton::S4(){
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
