//
// Created by Benjamin  Echarry on 9/22/22.
//

#ifndef PROJECT1_STARTER_CODE_STRINGUNDEFINEDAUTOMATON_H
#define PROJECT1_STARTER_CODE_STRINGUNDEFINEDAUTOMATON_H
#include "Automaton.h"

class StringUndefinedAutomaton : public Automaton {
private:
    void S0();
    void S1();
public:
    StringUndefinedAutomaton() : Automaton(TokenType::UNDEFINED) {}
};


#endif //PROJECT1_STARTER_CODE_STRINGUNDEFINEDAUTOMATON_H
