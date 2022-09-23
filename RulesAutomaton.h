//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_RULESAUTOMATON_H
#define PROJECT1_STARTER_CODE_RULESAUTOMATON_H
#include "Automaton.h"

class RulesAutomaton : public Automaton {
private:
    void S0();
    void S1();
    void S2();
    void S3();
    void S4();
public:
    RulesAutomaton() : Automaton(TokenType::RULES) {}
};


#endif //PROJECT1_STARTER_CODE_RULESAUTOMATON_H
