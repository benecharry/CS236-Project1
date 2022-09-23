//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "StringAutomaton.h"

void StringAutomaton::S0(){
    if (Match('\'')) {
        Next();
        S1();
    }
    else
        Serr();
}
void StringAutomaton::S1(){
    if (EndOfFile()) {
        type = TokenType::UNDEFINED;
        return;
    }
    else if((Current()!='\'')){
        Next();
        S1();
    }

    else if ('\'') {
        Next();
        S2();
    }
    else
        Serr();
}
void StringAutomaton::S2(){
    if (EndOfFile()) {
        type = TokenType::UNDEFINED;
        return; // accept
    }
    else if(Match('\'')){
        Next();
        S1();
    }
}


