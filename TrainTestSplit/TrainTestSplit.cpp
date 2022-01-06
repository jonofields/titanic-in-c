#include "TrainTestSplit.h"
#include <iostream>
#pragma once

void Split::inputTest(double test_size_){
    test_size = test_size_;

}
double Split::getTrain(double test_size){
    train_size = 1 - test_size;
    return train_size;
}
//TO DO: to array
//randomize
//split