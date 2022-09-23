//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_PERIODAUTOMATON_H
#define PROJECT1_STARTER_CODE_PERIODAUTOMATON_H
#include "Automaton.h"

class PeriodAutomaton : public Automaton{
private:
    void S0();
public:
    PeriodAutomaton() : Automaton(TokenType::PERIOD) {}
};


#endif //PROJECT1_STARTER_CODE_PERIODAUTOMATON_H
