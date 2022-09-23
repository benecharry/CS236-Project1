//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_LINECOMMENTAUTOMATON_H
#define PROJECT1_STARTER_CODE_LINECOMMENTAUTOMATON_H
#include "Automaton.h"

class LineCommentAutomaton : public Automaton {
public:
    LineCommentAutomaton() : Automaton(TokenType::COMMENT) {}
private:
    void S0();
    void S1();
    void S2();
    void S3();
    void S4();
};


#endif //PROJECT1_STARTER_CODE_LINECOMMENTAUTOMATON_H
