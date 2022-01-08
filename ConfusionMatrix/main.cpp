#include "ConfusionMatrix.cpp"
#include <iostream>
#include <vector>
#include <cstddef>

using std::cout; using std::cin; using std::vector; using std::endl;

using namespace PerformanceEval;

const int TERMINATOR = -1;

int main()
{   //need to loop through streams dummy!
    Matrix mat;
    ClassificationReport classif;

    int num;

    cout << "Enter the 'expected' array." << "\n" << "Press enter after selecting each 1 or 0"
    << "\n" << "Enter -1 (return/enter) when finished" << endl;
    while((cin >> num) && num != TERMINATOR){
        mat.expected_.push_back(num);
    }
    mat.len = mat.expected_.size();
    cout << "Array lenght: " << mat.len << endl;

    cout << "Expected: ";
    for(std::size_t i=0; i<mat.expected_.size();++i){
        cout << " " << mat.expected_[i];
    }
    cout << "\n" << endl;


     cout << "Enter the 'expected' array." << "\n" << "Press enter after selecting each 1 or 0"
    << "\n" << "Enter -1 (return/enter) when finished" << endl;
    while((cin >> num) && num != TERMINATOR){
        mat.predicted_.push_back(num);
    }
    cout << "Predicted: ";
    for(std::size_t i=0; i<mat.predicted_.size();++i){
        cout << " " << mat.predicted_[i];
    }

    cout << "\n" << "\n" << endl;



    cout << "Confusion Matrix: " << "\n" << endl;
    mat.calcMatrix(mat.expected_,mat.predicted_);

    cout << "False Positives: " << mat.false_positive << "\n" << endl;

    cout << "True Positives: " << mat.true_positive << "\n" << endl;

    cout << "False Negatives: " <<mat.false_negative << "\n" << endl;

    cout << "True Negatives: " << mat.true_negative << "\n" << endl;

    classif.len = mat.len;
    classif.true_negative = mat.true_negative;
    classif.false_negative = mat.false_negative;
    classif.true_positive = mat.true_positive;
    classif.false_positive = mat.false_positive;


    cout << "Classification Report: " << "\n" << endl;
    
    classif.Accuracy(classif.true_positive, classif.true_negative, classif.len);
    cout << "Accuracy: " << classif.accuracy << "\n" << endl;

    classif.Precision(classif.true_positive,classif.false_positive);
    cout << "Precision: " << classif.precision << "\n"<< endl;

    classif.Recall(classif.true_positive,classif.false_positive);
    cout << "Recall: " << classif.recall << "\n"<< endl;

    classif.F1(classif.precision, classif.recall);
    cout << "F1: " << classif.f_one << "\n"<< endl;


    return 0;
}
