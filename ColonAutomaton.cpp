#include "ColonAutomaton.h"

void ColonAutomaton::S0(){
    if (Match(':')) {
        Next();
        return;
    }
    else {
        Serr();
    }
}