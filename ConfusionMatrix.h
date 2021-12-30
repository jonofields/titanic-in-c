#include <iostream>
#include <vector>
//expected and predicted to be vectors?

class Matrix {

    public:
        int true_positive;
        int false_negative;
        int false_positive;
        int true_negative;
        int len;

        void inputExpected(int expected);
        void inputPredicted(int predicted);
        int iterValue(int i);
        int calcMatrix(int expected_, int predicted_);



    private:
        int expected_;
        int predicted_;



 

    
};
class ClassificationReport{
    public:
        double Accuracy(int true_positive, int true_negative, int len);
        double Precision(int true_positive, int false_positive);
        double Recall(int true_positive, int false_negative);
        double F1(double precision, double recall);

        double precision;
        double recall;
        double f_one;
        double accuracy;

};