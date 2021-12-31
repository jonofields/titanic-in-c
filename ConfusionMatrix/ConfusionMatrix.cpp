#include "ConfusionMatrix.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::cin;

//Possibly will be Booleans? Meant to be for individual indices which 
//may or may not need iterValue. May be able to do with only calcMatrix

int y_pos; //target
int yhat_pos; //predicted
int y_neg; //target
int yhat_neg; //predicted

void Matrix::inputExpected(int expected){
    expected_ = expected;
    //heap?
}
void Matrix::inputPredicted(int predicted){
    predicted_ = predicted;
    //heap?
}
//TO DO FOR CALC: 
//FIND A WAY TO ITERATE BETWEEN EACH AND COMPARE AT INDEX
//COUNT TP, TN, FP, FN AND STORE


// int Matrix::iterValue(int i){

// }
// int Matrix::calcMatrix(int predicted_, int expected_){
//     while(i<predicted_[i]){
//         if(){
//             true_positive = true_positive + 1;
//             int * true_positive = new int; 
//         }
//         else if (){
//             true_negative = true_negative + 1;
//         }
//         else if(){
//             false_positive = false_positive +1;
//         }
//         else if(){
//             false_negative = false_negative + 1;
//         }
//     }
// }
double ClassificationReport::Accuracy(int true_positive, int true_negative, int len){
    ClassificationReport::accuracy = (true_negative + true_positive)/ len;
}

double ClassificationReport::Precision(int true_positive, int false_positive){
    ClassificationReport::precision = true_positive / true_positive + false_positive;
    int * precision = new int;//pointer here or in main file?
}

double ClassificationReport::Recall(int true_positive, int false_negative){
    ClassificationReport::recall = true_positive / true_positive + false_negative;
    int * recall = new int;
}

double ClassificationReport::F1(double precision, double recall){
    2 / (1/precision) + (1/recall);
    //Don't think F1 has to go in heap.  
}

//^^Split Matrix class into Matrix(variables and functions in finding
//the matrix itself) and ClassificationReport class, which includes three bottom functions.
//Add Accuracy?