#include "../boost/math/distributions/fwd.hpp"
#include "../boost/math/distributions/exponential.hpp"
#include "../boost/math/policies/policy.hpp"

namespace LogReg {
class Calculate {

    public:
    double phat;
    int yhat;
    double x;
    int y;
    int Predict(double phat,int yhat);
    double x_;
    double Sigmoid(double x);
    double inputX(double x_);
    int sig;

    private:
    double sig_;

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