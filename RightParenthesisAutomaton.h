//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_RIGHTPARENTHESISAUTOMATON_H
#define PROJECT1_STARTER_CODE_RIGHTPARENTHESISAUTOMATON_H
#include "Automaton.h"

class RightParenthesisAutomaton : public Automaton {
private:
    void S0();
public:
    RightParenthesisAutomaton() : Automaton(TokenType::RIGHT_PAREN) {}

};


#endif //PROJECT1_STARTER_CODE_RIGHTPARENTHESISAUTOMATON_H
