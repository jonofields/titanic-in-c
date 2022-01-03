#include "TrainTestSplit.h"
double Split::inputTest(test_size_){
    test_size = test_size_;
    return test_size;
}
double Split::getTrain(test_size){
    train_size = 1 - test_size;
    return train_size;
    return test_size;
}
