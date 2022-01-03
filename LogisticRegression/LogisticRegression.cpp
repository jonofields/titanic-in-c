#include "LogisticRegression.h"
#include "../boost/math/distributions/fwd.hpp"
#include "../boost/math/distributions/exponential.hpp"

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
using std::cin; using LogReg::Calculate::x_;
double LogReg::Calculate::inputX(x_){
    cin >> x_ >> endl;
    return x_;
    int * x_ = x;
    x = new int;
    return x;
    return x*;
}

// double LogReg::Calculate::Sigmoid(LogReg::Calculate::x){
//     sig_ = 1/(1+boost::math::detail::pdf(const exponential_distribution<RealType lambda=1, Policy policy_type = boost::math::tools::T>));
//     return sig_; 
//     int * sig = sig_;
//     sig = new int;
//     return sig;
        
// }   
// template <class RealType, class Policy>
// inline RealType pdf(const exponential_distribution<RealType, Policy>& dist, const RealType& x)
// {
//    BOOST_MATH_STD_USING // for ADL of std functions

//    static const char* function = "boost::math::pdf(const exponential_distribution<%1%>&, %1%)";

//    RealType lambda = dist.lambda();
//    RealType result = 0;
//    if(0 == detail::verify_lambda(function, lambda, &result, Policy()))
//       return result;
//    if(0 == detail::verify_exp_x(function, x, &result, Policy()))
//       return result;
//    // Workaround for VC11/12 bug:
//    if ((boost::math::isinf)(x))
//       return 0;
//    result = lambda * exp(-lambda * x);
//    return result;
// } // pdf

// g++ /Users/jonofields/Desktop/Programming/C++/titanic-in-c/LogisticRegression/LogisticRegression.cpp -std=c++11

 

