#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include <sstream>
using namespace std;

enum TokenType {
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    COLON,
    COLON_DASH,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    BLOCK_COMMENT, // II DONT KNOW
    END,
    COMMENT,
    UNDEFINED,
};

class Token
{
private:
    //Token(TokenType type, string description, int line);

    TokenType type;
    string contents;
    unsigned int line;
    // TODO: add member variables for information needed by Token

public:

    Token(TokenType type, const string &contents, unsigned int line) : type(type), contents(contents), line(line) {}
    Token(TokenType type, std::string description, int line);

    string toString() const {
        stringstream out;
        out << "(" << typeName(type) << "," << "\"" << contents << "\"" << "," << line << ")";
        return out.str();
    }

    string typeName(TokenType type) const {
        switch (type) {
            case COMMA:
                return "COMMA";
            case PERIOD:
                return "PERIOD";
            case Q_MARK:
                return "Q_MARK";
            case LEFT_PAREN:
                return "LEFT_PAREN";
            case RIGHT_PAREN:
                return "RIGHT_PAREN";
            case COLON:
                return "COLON";
            case COLON_DASH:
                return "COLON_DASH";
            case MULTIPLY:
                return "MULTIPLY";
            case ADD:
                return "ADD";
            case SCHEMES:
                return "SCHEMES";
            case FACTS:
                return "FACTS";
            case RULES:
                return "RULES";
            case QUERIES:
                return "QUERIES";
            case ID:
                return "ID";
            case STRING:
                return "STRING";
            case END:
                return "EOF";
            case COMMENT:
                return "COMMENT";
            case BLOCK_COMMENT:
                return "BLOCK_COMMENT";
            case UNDEFINED:
                return "UNDEFINED";
            default:
                return "ADD TO SWITCH";
        }
    }

    // TODO: add other needed methods
};

#endif // TOKEN_H


