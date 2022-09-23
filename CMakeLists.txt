cmake_minimum_required(VERSION 3.23)
project(Project1_Starter_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project1_Starter_Code
        Automaton.h
        AddAutomaton.cpp
        AddAutomaton.h
        BlockCommentAutomaton.cpp
        BlockCommentAutomaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        CommaAutomaton.cpp
        CommaAutomaton.h
        EmptyStringAutomaton.cpp
        EmptyStringAutomaton.h
        EOFAutomaton.h
        EOFAutomaton.cpp
        FactsAutomaton.cpp
        FactsAutomaton.h
        IDAutomaton.cpp
        IDAutomaton.h
        LeftParenthesisAutomaton.cpp
        LeftParenthesisAutomaton.h
        Lexer.h
        Lexer.cpp
        LineCommentAutomaton.cpp
        LineCommentAutomaton.h
        main.cpp
        MultiplyAutomaton.cpp
        MultiplyAutomaton.h
        PeriodAutomaton.cpp
        PeriodAutomaton.h
        QueriesAutomaton.cpp
        QueriesAutomaton.h
        QuestionMarkAutomaton.cpp
        QuestionMarkAutomaton.h
        RightParenthesisAutomaton.cpp
        RightParenthesisAutomaton.h
        RulesAutomaton.cpp
        RulesAutomaton.h
        SchemesAutomaton.cpp
        SchemesAutomaton.h
        StringAutomaton.cpp
        StringAutomaton.h
        Token.cpp
        Token.h
        CharUndefinedAutomaton.cpp
        CharUndefinedAutomaton.h
        StringUndefinedAutomaton.cpp
        StringUndefinedAutomaton.h
        )
