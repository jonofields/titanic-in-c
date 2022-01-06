#include "TrainTestSplit.h"
#include <iostream>
#pragma once
double Split::inputTest(double test_size_){
    test_size = test_size_;
    return test_size;

}
double Split::getTrain(double test_size){
    train_size = 1 - test_size;
    return train_size;
}
