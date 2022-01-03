#include "TrainTestSplit.h"
#include <iostream>
double Split::inputTest(double Split::test_size_){
    std::cin >> test_size_ >> std::endl;
    test_size = test_size_;
    return test_size;
}
double Split::getTrain(double Split::test_size = test_size){
    train_size = 1 - test_size;
    return train_size;
    return test_size;
}
