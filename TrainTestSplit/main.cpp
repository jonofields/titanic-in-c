#include <iostream>
// #include "TrainTestSplit.h"
#include "TrainTestSplit.cpp"
using std::cin; using std::cout; using std::endl;
int main(){
    Split s;
    cin >> s.test_size_;
    s.inputTest(s.test_size_);
    // s.test_size_ = .2;
    cout << "Input test size: " << endl;
    cout << s.getTrain(s.test_size) << endl;

}