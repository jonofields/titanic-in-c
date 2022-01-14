// #include "../boost/math/distributions/fwd.hpp"
// #include "../boost/math/distributions/exponential.hpp"
// #include "../boost/math/policies/policy.hpp"
#include <vector>
#include <valarray>
using std::vector;

namespace LogReg {
    

    class Calculate {

        public:
        double phat;
        int yhat;
        double x;
        int y;
        int Predict(double phat,int yhat);
        double Sigmoid(double x);
        void inputX(double x_);
        double x_;
        double sig_;


        vector <double> sigmoidVector(vector <double> X);
        vector <double> X;
        std::valarray<double> sig_vec_;

};

}