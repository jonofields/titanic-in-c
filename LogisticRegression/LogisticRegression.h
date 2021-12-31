#include "boost/math/distributions/fwd.hpp"
#include "boost/math/distributions/exponential.hpp"
#include <boost/math/policies/policy.hpp>

namespace LogReg {
class Calculate {
    double phat;
    int yhat;
    int Predict(double phat, int yhat);

    //sigmoid 1/1+exp(-x)
    //c library for math
    //Gnu Scientific Library, possible choice but need to use the linux mach
    //boost an option for mac Random, Multi-array, Math/statistics package
    double x;
    int y;
    template <class RealType = double,
          class Policy   = boost::math::policies::policy <> >
        class exponential_distribution;

        typedef exponential_distribution<> exponential;

    template <class RealType, class Policy>
    class exponential_distribution
        {
    public:
        typedef RealType value_type;
        typedef Policy   policy_type;

    exponential_distribution(RealType lambda = 1);

   RealType lambda()const;
};


};
}