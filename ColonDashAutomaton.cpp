#include "ColonDashAutomaton.h"

void ColonDashAutomaton::S0() {
    if (Match(':')) {
        Next();
        S1();
    }
    else
        Serr();
}

void ColonDashAutomaton::S1(){
    if (EndOfFile()) {
        Serr();
    }
    else if (Match('-')) {
        Next();
        return;
    }
    else
        Serr();
}