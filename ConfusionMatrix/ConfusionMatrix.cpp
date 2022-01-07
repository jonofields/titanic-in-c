#include "ConfusionMatrix.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
using std::cout; using std::cin;

//Possibly will be Booleans? Meant to be for individual indices which 
//may or may not need iterValue. May be able to do with only calcMatrix


// void Matrix::inputExpected(vector <int> expected_){
//     expected = expected_;
   
// }
// void Matrix::inputPredicted(vector <int> predicted_){
//     predicted = predicted_;
   
// }
int Matrix::calcMatrix(vector <int> expected_, vector <int> predicted_){
    for(std::size_t i=0;i<expected_.size();++i){
        if((expected_[i]==1)&&(predicted_[i]==1)){
            true_positive = true_positive + 1;
        }
        else if((expected_[i]==0)&&(predicted_[i]==1)){
            false_positive = false_positive + 1;
        }
        else if((expected_[i]==0)&&(predicted_[i]==0)){
            true_negative = true_negative + 1;
        }
        else if((expected_[i]==1)&&(predicted_[i]==0)){
            false_negative = false_negative + 1;
        }
    }
    return true_positive;return true_negative;return false_positive; return false_negative;
}


double ClassificationReport::Accuracy(int true_positive, int true_negative, int len){
    accuracy = (true_negative + true_positive)/ len;
    return accuracy;
}

double ClassificationReport::Precision(int true_positive, int false_positive){
    precision = true_positive / true_positive + false_positive;
    return precision;
    // int * precision = new int;//pointer here or in main file?
}

double ClassificationReport::Recall(int true_positive, int false_negative){
    recall = true_positive / true_positive + false_negative;
    return recall;
}

double ClassificationReport::F1(double precision, double recall){
    f_one = 2 / (1/precision) + (1/recall);
    return f_one;
     
}

//^^Split Matrix class into Matrix(variables and functions in finding
//the matrix itself) and ClassificationReport class, which includes three bottom functions.
//Add Accuracy?