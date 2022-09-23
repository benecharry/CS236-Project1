//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_COMMAAUTOMATON_H
#define PROJECT1_STARTER_CODE_COMMAAUTOMATON_H
#include "Automaton.h"

class CommaAutomaton : public Automaton {
public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}
private:
    void S0();
};


#endif //PROJECT1_STARTER_CODE_COMMAAUTOMATON_H
