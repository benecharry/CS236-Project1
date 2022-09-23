#include "Token.h"

Token::Token(TokenType type, std::string description, int line) {
    this->type = type;
    contents = description;
    this->line = line;

}


//The actual value (string)
//The line number the token starts on (int)
//The type of the token (TokenType)
//toString() → (COLON_DASH,":-",6)