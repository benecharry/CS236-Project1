//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_IDAUTOMATON_H
#define PROJECT1_STARTER_CODE_IDAUTOMATON_H
#include "Automaton.h"

class IDAutomaton : public Automaton {
private:
    void S0();
    void S1();
public:
    IDAutomaton() : Automaton(TokenType::ID) {}
};


#endif //PROJECT1_STARTER_CODE_IDAUTOMATON_H
