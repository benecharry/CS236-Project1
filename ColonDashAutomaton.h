#ifndef COLONDASHAUTOMATON_H
#define COLONDASHAUTOMATON_H

#include "Automaton.h"

class ColonDashAutomaton : public Automaton
{
public:
    ColonDashAutomaton() : Automaton(TokenType::COLON_DASH) {}
private:
    void S0();
    void S1();
};

#endif // COLONDASHAUTOMATON_H


