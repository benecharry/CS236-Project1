//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "LeftParenthesisAutomaton.h"
void LeftParenthesisAutomaton::S0() {
    if (input[index] == '(') {
        inputRead = 1;
    }
    else {
        Serr();
    }
}