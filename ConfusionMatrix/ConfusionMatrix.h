#include <iostream>
#include <vector>
//expected and predicted to be vectors?
using std::vector;
namespace PerformanceEval{
class Matrix {

    public:
        int true_positive = 0;
        int false_negative = 0;
        int false_positive = 0;
        int true_negative = 0;
        int len = 0;


        vector <int> expected;
        vector <int> predicted;
        vector <int> expected_;
        vector <int> predicted_;

        void inputExpected(vector <int> expected_);
        void inputPredicted(vector <int> predicted_);
        // int iterValue(int i);
        int num;
        int calcMatrix(vector <int> expected, vector <int> predicted);

        // int y_pos; //target
        // int yhat_pos; //predicted
        // int y_neg; //target
        // int yhat_neg; //predicted

    
       
        


 

    
};
class ClassificationReport{
    public:
        int true_positive;
        int true_negative;
        int false_positive;
        int false_negative;
        int len;


        double Accuracy(int true_positive, int true_negative, int len);
        double Precision(int true_positive, int false_positive);
        double Recall(int true_positive, int false_negative);
        double F1(double precision, double recall);

        double precision;
        double recall;
        double f_one;
        double accuracy;

};
}