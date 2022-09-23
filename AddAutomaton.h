//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_ADDAUTOMATON_H
#define PROJECT1_STARTER_CODE_ADDAUTOMATON_H
#include "Automaton.h"

class AddAutomaton : public Automaton {
public:
    AddAutomaton() : Automaton(TokenType::ADD){}
private:
    void S0();
};

#endif //PROJECT1_STARTER_CODE_ADDAUTOMATON_H
