#pragma once
#include <cstdlib>
#include <vector>
using std::vector;
class Split {
    public:
    int X;
    int y;
    double train_size;
    double test_size;
    double getTrain(double test_size);
    //to be input ^^
    int train;
    int test;
    //^^output
    int trainTestSplit(int X, int y, double train_size, double test_size);
    double test_size_;
    void inputTest(double test_size_);

    private:
    int test_p;
    int train_p;
};
class Randomize{
    public:
    int i;
    vector<int> vector_x;
    vector<double> vector_y;
    int randomizeVector(int i);

    vector<int> inputVectorY(vector<int> vector_y);
    vector<double> inputVectorX(vector<double> vector_x);
};