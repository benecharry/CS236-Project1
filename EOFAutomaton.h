//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_EOFAUTOMATON_H
#define PROJECT1_STARTER_CODE_EOFAUTOMATON_H
#include "Automaton.h"

class EOFAutomaton : public Automaton {
private:
    void S0();
public:
    EOFAutomaton() : Automaton(TokenType::END) {}
};


#endif //PROJECT1_STARTER_CODE_EOFAUTOMATON_H
