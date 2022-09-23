//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "BlockCommentAutomaton.h"
#include "Token.h"

void BlockCommentAutomaton::S0(){
    if (Match('#')) {
        Next();
        S1();
    }
    else
        Serr();
}

void BlockCommentAutomaton::S1(){
    if (EndOfFile()) {
        Serr();
    }
    else if (Match('|')) {
        Next();
        S2();
    }
    else
        Serr();
}

void BlockCommentAutomaton::S2(){
    if (EndOfFile()) {
        type = TokenType::UNDEFINED;
        return;
    }
    if (isspace(Current())or(isalnum(Current()))) {
        Next();
        S2();
    }
    else if(Current()=='|'){
        Next();
        S3();
    }
    else
        Serr();
}

void BlockCommentAutomaton::S3(){
    if (EndOfFile()) {
        Serr();
    }
    if (Current()=='#') {
        return;
        S1();
    }
    else
        Serr();
}