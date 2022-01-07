#include "LogisticRegression.h"
#include <cmath>
#include <valarray>
#include <vector>
// https://www.cplusplus.com/reference/algorithm/
using std::vector;
// #include "../boost/math/distributions/fwd.hpp"
// #include "../boost/math/distributions/exponential.hpp"

//double Calculate::LogisticReg(){}

// int Calculate::Predict(double phat, int yhat){
//     if(phat >= 1){
//             yhat = 1;
//     }
//     else if(phat < 1){
//             yhat = 0;
//     }
//     return yhat;
// }
//TACKLE SIMPLE STUFF


#include <iostream>

void LogReg::Calculate::inputX(double x_){
    x = x_;
}
//don't mess with mem for now

double LogReg::Calculate::Sigmoid(double x){
    sig_ = 1/(1+exp(-x));
    return sig_; 
}   

//For Arrays-- Actually do not need
// vector <double> LogReg::Calculate::sigmoidVector(vector <double> X){
//     sig_vec_ = 1/(1+exp(X));
//     return sig_vec_;
// }  

// http://faculty.cas.usf.edu/mbrannick/regression/Logistic.html