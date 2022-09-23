//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_QUESTIONMARKAUTOMATON_H
#define PROJECT1_STARTER_CODE_QUESTIONMARKAUTOMATON_H
#include "Automaton.h"

class QuestionMarkAutomaton : public Automaton {
private:
    void S0();
public:
    QuestionMarkAutomaton() : Automaton(TokenType::Q_MARK) {}

};


#endif //PROJECT1_STARTER_CODE_QUESTIONMARKAUTOMATON_H
