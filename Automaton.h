#ifndef AUTOMATON_H
#define AUTOMATON_H
#include <string>
#include "Token.h"

class Automaton
{
protected:
    unsigned int inputRead = 0;
    unsigned int newLines = 0;
    unsigned int index = 0;
    std::string input = "";
    TokenType type;


    char Current(){
        if(EndOfFile()){
            throw "Tried to read past the file, does your automaton state check for it as a transition?";
        }
        return input.at(index);
    }

    bool Match(char character){
        if (EndOfFile()) {
            throw "Tried to read past the file, does your automaton state check for it as a transition?";
        }
        return (Current() == character);
    }

    void Next(){
        if(Current() == '\n'){
            newLines++;
        }
        inputRead++;
        index++;
    }

    // Every subclass must define this method
    virtual void S0() = 0;

    void Serr() {
        // Indicate the input was rejected
        inputRead = 0;
    }

    bool EndOfFile() {
        return (index >= input.size());
    }

public:
    // Default constructor -- since we have a constructor that takes a parameter,
    //   the compiler will autogenerate a default constructor if not explicit.
    Automaton() : Automaton(TokenType::UNDEFINED) {}

    Automaton(TokenType type) { this->type = type; }

    // Start the automaton and return the number of characters read
    //   read == 0 indicates the input was rejected
    //   read  > 0 indicates the input was accepted
     int Start(const std::string& input) {
        this-> input = input;
        newLines = 0;
        inputRead = 0;
        index = 0;
        S0();
        return inputRead;
    }

    TokenType GetType() const{
        return type;
    }

    virtual Token* CreateToken(std::string input, int lineNumber) { return new Token(type, input, lineNumber); }

    int NewLinesRead() const { return newLines; }
};

#endif // AUTOMATON_H

