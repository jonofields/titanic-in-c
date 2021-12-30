#include "LogisticRegression.h"
#include "boost_math/distributions/fwd.hpp"
#include "boost_math/distributions/exponential.hpp"
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
