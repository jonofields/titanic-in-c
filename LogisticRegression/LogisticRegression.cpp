#include "LogisticRegression.h"
#include <../boost/math/distributions/fwd.hpp>
#include <../boost/math/distributions/exponential.hpp>
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
#include <iostream>
using std::cin;
double LogReg::Calculate::inputX(LogReg::Calculate::x_){
    cin >> x_ >> endl;
    return x_;
    int * x_ = x;
    x = new int;
    return x;
    return x*;
}

double LogReg::Calculate::Sigmoid(LogReg::Calculate::x){
    sig_ = 1/(1+boost::math::exponential_distribution(RealType lambda=LogReg::Calculate::x));
    return sig_; 
    int * sig = sig_;
    sig = new int;
    return sig;
        
}   


 

