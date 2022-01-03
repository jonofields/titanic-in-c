#include <iostream>
#include "TrainTestSplit.h"
using std::cin; using std::cout; using std::endl;
int main(){
    Split s;
    cout << "Input test size: " << endl;
    cin >> s.inputTest(s.test_size_) >> endl;
    cout << s.getTrain(s.test_size = s.test_size) << endl;

}