#include "LearnCpp4.hpp"

#include <iostream>

double calculate(double a, double b, char operation)
{
    double result{};
    switch(operation){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    return result;
}

void getUserInput(double& a, double& b, char& operation) {
    std::cout << "Type a number:";
    std::cin >> a;
    std::cout << "Type another number:";
    std::cin >> b;
    std::cout << "Type an operation ( + - * / ):";
    std::cin >> operation;
}

void learCpp4()
{   double a = {};
    double b = {};
    char operation = {'+'};

    getUserInput(a, b, operation);

    double result = calculate(a, b, operation);

    std::cout << "The result of " << a << operation << b << " is " << result;
    std::cout << std::endl;
}