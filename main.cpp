#include "Lexer.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    Lexer lexer;
    string inString;
    string filename = argv[1];
    //string filename = "example.txt";
    ifstream inputFile;
    inputFile.open(filename);
    if (inputFile.is_open())
    {
        while (inputFile.peek()!=EOF)
        {

            char line;
            line = inputFile.get();
            inString.push_back(line);

        }
        inputFile.close();
        lexer.Run(inString);
    }

    else cout << "Unable to open file.";
    return 0;
}