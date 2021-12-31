#include "LogisticRegression.h"
#include <iostream>
#include <string>

using std::cin; using std::cout;
int main(){
    LogReg::Calculate c;
    cout << "Sigmoid test, input x" << std::endl;
    cin >> c.x >> std::endl;
    cout << c.Sigmoid(c.x) << std::endl;

}

//g++ /Users/jonofields/Desktop/Programming/C++/titanic-in-c/LogisticRegression/main.cpp -std=c++11