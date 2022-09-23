//
// Created by Benjamin  Echarry on 9/22/22.
//

#ifndef PROJECT1_STARTER_CODE_EMPTYSTRING_H
#define PROJECT1_STARTER_CODE_EMPTYSTRING_H
#include "Automaton.h"


class EmptyStringAutomaton : public Automaton {
public:
    EmptyStringAutomaton() : Automaton(TokenType::STRING) {}
private:
    void S0();
    void S1();
};


#endif //PROJECT1_STARTER_CODE_EMPTYSTRING_H
