//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_MULTIPLYAUTOMATON_H
#define PROJECT1_STARTER_CODE_MULTIPLYAUTOMATON_H
#include "Automaton.h"

class MultiplyAutomaton : public Automaton{
private:
    void S0();
public:
    MultiplyAutomaton() : Automaton(TokenType::MULTIPLY) {}
};


#endif //PROJECT1_STARTER_CODE_MULTIPLYAUTOMATON_H
