#include <iostream>
#include <vector>
//expected and predicted to be vectors?

class Matrix {

    public:
        int true_positive;
        int false_negative;
        int false_positive;
        int true_negative;
        double precision;
        double recall;
        double f_one;
        void inputExpected(int expected);
        void inputPredicted(int predicted);
        int iterValue(int i);
        int calcMatrix(int expected_, int predicted_);
        double Precision(int true_positive, int false_positive);
        double Recall(int true_positive, int false_negative);
        double F1(double precision, double recall);
        void check;

    private:
        int expected_;
        int predicted_;



 

    
};