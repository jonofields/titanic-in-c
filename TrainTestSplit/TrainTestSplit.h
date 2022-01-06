#pragma once
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