#include "../boost/math/distributions/fwd.hpp"
#include "../boost/math/distributions/exponential.hpp"
#include "../boost/math/policies/policy.hpp"

namespace LogReg {
class Calculate {

    public:
    double phat;
    int yhat;
    double x;
    int Predict(double phat, int yhat);
    int Sigmoid(double x);
    double sig_;
    //sigmoid 1/1+exp(-x)
    int y;

    //For boost
    template <class RealType = double,
          class Policy   = boost::math::policies::policy <> >
        class exponential_distribution;

        typedef exponential_distribution<> exponential;

    template <class RealType, class Policy>
    class exponential_distribution
        {
    
        typedef RealType value_type;
        typedef Policy   policy_type;

    exponential_distribution(RealType lambda = 1);

   RealType lambda()const;
};


};
}