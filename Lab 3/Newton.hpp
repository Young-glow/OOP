#pragma once
#include <iostream>
#include <cmath>

class Newton
{
private:
    double f(double x);
    double derivative(double x, double delta = 1e-6);
    int n;
    double a, b;
    double x0;
    double eps;

public:
    int count(double& x); 
    void setN(int n);
    void setRange(double a, double b);
    void setX0(double x0); 
    void setEps(double eps);
};
