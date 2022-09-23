//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_LEFTPARENTHESISAUTOMATON_H
#define PROJECT1_STARTER_CODE_LEFTPARENTHESISAUTOMATON_H
#include "Automaton.h"

class LeftParenthesisAutomaton : public Automaton {
private:
    void S0();
public:
    LeftParenthesisAutomaton() : Automaton(TokenType::LEFT_PAREN) {}
};


#endif //PROJECT1_STARTER_CODE_LEFTPARENTHESISAUTOMATON_H
