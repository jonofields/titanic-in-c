#include "LogisticRegression.cpp"
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
int main(){
    LogReg::Calculate c;
    cout << "input x" << endl;
    cin >> c.x_;
    c.inputX(c.x_);
    cout << c.x << endl;

}

//g++ /Users/jonofields/Desktop/Programming/C++/titanic-in-c/LogisticRegression/main.cpp -std=c++11