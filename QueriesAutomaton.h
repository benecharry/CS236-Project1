//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_QUERIESAUTOMATON_H
#define PROJECT1_STARTER_CODE_QUERIESAUTOMATON_H
#include "Automaton.h"

class QueriesAutomaton : public Automaton {
private:
    void S0();
    void S1();
    void S2();
    void S3();
    void S4();
    void S5();
    void S6();

public:
    QueriesAutomaton() : Automaton(TokenType::QUERIES) {}
};


#endif //PROJECT1_STARTER_CODE_QUERIESAUTOMATON_H
