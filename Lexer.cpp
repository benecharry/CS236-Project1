#include <iostream>
#include <vector>
#include "Token.h"
#include "Automaton.h"
#include "Lexer.h"
#include "AddAutomaton.h"
#include "BlockCommentAutomaton.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "CommaAutomaton.h"
#include "EmptyStringAutomaton.h"
#include "PeriodAutomaton.h"
#include "QuestionMarkAutomaton.h"
#include "LeftParenthesisAutomaton.h"
#include "RightParenthesisAutomaton.h"
#include "MultiplyAutomaton.h"
#include "SchemesAutomaton.h"
#include "FactsAutomaton.h"
#include "RulesAutomaton.h"
#include "QueriesAutomaton.h"
#include "IDAutomaton.h"
#include "StringAutomaton.h"
#include "LineCommentAutomaton.h"
#include "CharUndefinedAutomaton.h"
#include "EOFAutomaton.h"
#include "CharUndefinedAutomaton.h"
#include "StringUndefinedAutomaton.h"
using namespace std;

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    // TODO: need to clean up the memory in `automata` and `tokens`
}
void Lexer::CreateAutomata(){
    automata.push_back(new AddAutomaton());
    automata.push_back(new LineCommentAutomaton());
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new CommaAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new QuestionMarkAutomaton());
    automata.push_back(new LeftParenthesisAutomaton());
    automata.push_back(new RightParenthesisAutomaton());
    automata.push_back(new MultiplyAutomaton());
    automata.push_back(new AddAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new IDAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new StringUndefinedAutomaton());
    automata.push_back(new CharUndefinedAutomaton());
    }

    // TODO: add any other private methods here (if needed)


vector<Token> Lexer::Run(string& input) {
    unsigned int newLine = 1;
    CreateAutomata();
        while(!input.empty()) {
            while (isspace(input.at(0))and(input.size() > 1)) {
                if(input.at(0) =='\n') {
                    newLine++;
                }
                input.erase(0, 1);
            }
            Automaton* maxAutomaton = automata.at(0);
            unsigned int maxRead = 0;
            for (unsigned int i = 0; i < automata.size(); i++) {
                Automaton* currentAutomaton = automata.at(i);
                if(currentAutomaton->Start(input) > maxRead) {
                    maxRead = currentAutomaton->Start(input);
                    maxAutomaton = currentAutomaton;
                }
            }
            if(input.size() == 1) {
                Token currToken = Token(END,"", newLine+1);
                cout << currToken.toString() << endl;
                tokens.push_back(currToken);
                cout << "Total Tokens = " << tokens.size();
                return tokens;
            }
            if(input.empty()) {
                Token currToken = Token(END,"", newLine+1);
                cout << currToken.toString() << endl;
                tokens.push_back(currToken);
                cout << "Total Tokens = " << tokens.size();
                return tokens;
            }
            Token currToken = Token(maxAutomaton->GetType(),input.substr(0, maxRead), newLine);
            if((maxAutomaton->GetType() == STRING) or (maxAutomaton->GetType() == UNDEFINED) or ((maxAutomaton->GetType() == COMMENT))) {
                newLine += maxAutomaton->NewLinesRead();
            }
            cout << currToken.toString() << endl;
            input = input.substr(maxRead);
            tokens.push_back(currToken);
            if(input.empty()) {
                Token currToken = Token(END,"", newLine);
                cout << currToken.toString() << endl;
                tokens.push_back(currToken);
                cout << "Total Tokens = " << tokens.size();
                return tokens;
            }
        }
        Token currToken = Token(END,"", newLine);
        cout << currToken.toString() << endl;
        tokens.push_back(currToken);
        cout << "Total Tokens = " << tokens.size();
        return tokens;
    }
// TODO: convert this pseudo-code with the algorithm into actual C++ code
/*
set lineNumber to 1
// While there are more characters to tokenize
loop while input.size() > 0 {
    set maxRead to 0
    set maxAutomaton to the first automaton in automata

    // TODO: you need to handle whitespace in between tokens

    // Here is the "Parallel" part of the algorithm
    //   Each automaton runs with the same input
    for each automaton in automata {
        inputRead = automaton.Start(input)
        if (inputRead > maxRead) {
            set maxRead to inputRead
            set maxAutomaton to automaton
        }
    }
    // Here is the "Max" part of the algorithm
    if maxRead > 0 {
        set newToken to maxAutomaton.CreateToken(...)
            increment lineNumber by maxAutomaton.NewLinesRead()
            add newToken to collection of all tokens
    }
    // No automaton accepted input
    // Create single character undefined token
    else {
        set maxRead to 1
            set newToken to a  new undefined Token
            (with first character of input)
            add newToken to collection of all tokens
    }
    // Update `input` by removing characters read to create Token
    remove maxRead characters from input
}
add end of file token to all tokens
*/


