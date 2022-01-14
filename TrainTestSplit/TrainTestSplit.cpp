#include "TrainTestSplit.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using std::vector; using std::cin;

#pragma once

void Split::inputTest(double test_size_){
    test_size = test_size_;

}
double Split::getTrain(double test_size){
    train_size = 1 - test_size;
    return train_size;
}
vector<double> Randomize::inputVectorX(vector<double> vector_x){
    int num;
    char TERMINATOR = 'x';
    std::cout << "Please enter x vector" << std::endl;
    while((cin >> num) && num != TERMINATOR){
        vector_x.push_back(num);
    }
    return vector_x;
}
vector<int> Randomize::inputVectorY(vector<int> vector_y){
    int num;
    char TERMINATOR = 'x';
    std::cout << "Please enter y vector" << std::endl;
    while((cin>>num) && num != TERMINATOR){
        vector_y.push_back(num);
    }
    return vector_y;
}
int Randomize::randomizeVector(int i){return std::rand()%i;}
