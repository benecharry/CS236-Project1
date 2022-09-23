//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_CHARUNDEFINEDAUTOMATON_H
#define PROJECT1_STARTER_CODE_CHARUNDEFINEDAUTOMATON_H
#include "Automaton.h"

class CharUndefinedAutomaton : public Automaton {
private:
    void S0();
public:
    CharUndefinedAutomaton() : Automaton(TokenType::UNDEFINED) {}
};


#endif //PROJECT1_STARTER_CODE_CHARUNDEFINEDAUTOMATON_H
