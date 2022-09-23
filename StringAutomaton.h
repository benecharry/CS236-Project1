//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
#define PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
#include "Automaton.h"

class StringAutomaton : public Automaton {
private:
    void S0();
    void S1();
    void S2();
public:
    StringAutomaton() : Automaton(TokenType::STRING) {}
};


#endif //PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
