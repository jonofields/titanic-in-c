#include "LogisticRegression.h"
#include <boost/math/distributions/fwd.hpp>
#include <boost/math/distributions/exponential.hpp>
//double Calculate::LogisticReg(){}

int Calculate::Predict(double phat, int yhat){
    if(phat >= 1){
            yhat = 1;
    }
    else if(phat < 1){
            yhat = 0;
    }
    return yhat;
}
double Calculate::Sigmoid(double x){
    1/(1+boost::math::exponential_distribution(RealType lambda=1,x));
        
}   

 

