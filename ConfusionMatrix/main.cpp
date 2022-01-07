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
    
    while((cin >> num) && num != TERMINATOR){
        mat.expected_.push_back(num);
    }
    mat.len = mat.expected_.size();
    cout << mat.len << endl;

    for(std::size_t i=0; i<mat.expected_.size();++i){
        cout << " " << mat.expected_[i];
    }
    cout << endl;

    while((cin >> num) && num != TERMINATOR){
        mat.predicted_.push_back(num);
    }
    for(std::size_t i=0; i<mat.predicted_.size();++i){
        cout << " " << mat.predicted_[i];
    }
    cout << endl;

    mat.calcMatrix(mat.expected_,mat.predicted_);
    cout << mat.false_positive << endl;
    cout << mat.true_positive << endl;
    cout << mat.false_negative << endl;
    cout << mat.true_negative << endl;

    ClassificationReport classif;
    classif.Accuracy(mat.true_positive,mat.true_negative,mat.len);
    cout << classif.accuracy << endl;
    return 0;
}
