#include <iostream>
#include "TrainTestSplit.h"
#include "TrainTestSplit.cpp"
using std::cin; using std::cout; using std::endl;
int main(){
    Split s;
    s.test_size_ = .2;
    cout << "Input test size: " << endl;
    s.inputTest(s.test_size_);
    cout << s.getTrain(s.test_size) << endl;

}