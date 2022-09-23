//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "QueriesAutomaton.h"

void QueriesAutomaton::S0(){
    if (Match('Q')) {
        Next();
        S1();
    }
    else
        Serr();
}
void QueriesAutomaton::S1(){
    if (Match('u')) {
        Next();
        S2();
    }
    else
        Serr();
}
void QueriesAutomaton::S2(){
    if (Match('e')) {
        Next();
        S3();
    }
    else
        Serr();
}
void QueriesAutomaton::S3(){
    if (Match('r')) {
        Next();
        S4();
    }
    else
        Serr();
}
void QueriesAutomaton::S4(){
    if (Match('i')) {
        Next();
        S5();
    }
    else
        Serr();
}
void QueriesAutomaton::S5(){
    if (Match('e')) {
        Next();
        S6();
    }
    else
        Serr();
}
void QueriesAutomaton::S6(){
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