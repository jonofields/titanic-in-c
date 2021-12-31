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
int LogReg::Calculate::Sigmoid(LogReg::Calculate::x){
    sig_ = 1/(1+boost::math::exponential_distribution(RealType lambda=LogReg::Calculate::x));
    return sig_; 
        
}   

 

