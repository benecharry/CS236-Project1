//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "LineCommentAutomaton.h"

void LineCommentAutomaton::S0(){
    if (Match('#')) {
        Next();
        S1();
    }
    else
        Serr();
}

void LineCommentAutomaton::S1(){
    if (EndOfFile()) {
        type = TokenType::UNDEFINED;
        return;
    }
    else if (Match('|')){
        Next();
        S3();
    }
    else{
        Next();
        S2();
    }
}

void LineCommentAutomaton::S2(){
    if (EndOfFile()) {
        return;
    }
    else if((Current() != '\n')){
        Next();
        S2();
    }
}

void LineCommentAutomaton::S3(){
    if (EndOfFile()) {
        type = TokenType::UNDEFINED;
        return;
    }
    else if (!Match('|')){
        Next();
        S3();
    }
    else if (Match('|')){
        Next();
        S4();
    }
}

void LineCommentAutomaton::S4(){
    if (EndOfFile()) {
        type = TokenType::UNDEFINED;
        return;
    }
    else if (Match('#')){
        Next();
        return;
    }
    else if (Match('|')){
        Next();
        S4();
    }
    else if (!Match('|')){
        Next();
        S3();
    }
}