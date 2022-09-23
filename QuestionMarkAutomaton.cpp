//
// Created by Benjamin  Echarry on 9/19/22.
//

#include "QuestionMarkAutomaton.h"

void QuestionMarkAutomaton::S0() {
    if (Match('?')) {
        Next();
        return;
    }
    else {
        Serr();
    }
}