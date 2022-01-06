#include "LogisticRegression.h"
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









// double LogReg::Calculate::Sigmoid(double x){
//     sig_ = 1/(1+boost::math::detail::pdf(const exponential_distribution<RealType lambda=1>));
//     return sig_; 
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

 

