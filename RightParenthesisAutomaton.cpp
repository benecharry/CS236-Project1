//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "RightParenthesisAutomaton.h"
void RightParenthesisAutomaton::S0() {
    if (Match(')')) {
        Next();
        return;
    }
    else {
        Serr();
    }
}