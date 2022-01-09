#include "ConfusionMatrix.cpp"
#include <iostream>
#include <vector>
#include <cstddef>

using std::cout; using std::cin; using std::vector; using std::endl;


const int TERMINATOR = -1;

int main()
{   //need to loop through streams dummy!
    Matrix mat;

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

    cout << "\t" << "False Positives: " << mat.false_positive << "\n" << endl;

    cout << "\t" << "True Positives: " << mat.true_positive << "\n" << endl;

    cout << "\t" << "False Negatives: " <<mat.false_negative << "\n" << endl;

    cout << "\t" << "True Negatives: " << mat.true_negative << "\n" << "\n" << endl;




    cout << "Classification Report: " << "\n" << endl;

    mat.Accuracy(mat.true_positive, mat.true_negative, mat.len);
    cout<< "\t" << "Accuracy: " << mat.accuracy << "\n" << endl;

    mat.Precision(mat.true_positive, mat.false_positive);
    cout<< "\t" << "Precision: " << mat.precision << "\n"<< endl;
 
    mat.Recall(mat.true_positive, mat.false_negative);
    cout<< "\t" << "Recall: " << mat.recall << "\n"<< endl;

    mat.F1(mat.precision, mat.recall);
    cout<< "\t" << "F1: " << mat.f_one << "\n"<< endl;

    


    return 0;
}
