//
// Created by Benjamin  Echarry on 9/19/22.
//

#ifndef PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
#define PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
#include "Automaton.h"

class BlockCommentAutomaton : public Automaton {
public:
    BlockCommentAutomaton() {type = TokenType::COMMENT;}
private:
    void S0();
    void S1();
    void S2();
    void S3();
};


#endif //PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
