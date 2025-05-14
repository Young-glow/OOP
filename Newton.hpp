#pragma once
#include <iostream>
#include <cmath>
#include <functional>

class Newton
{
private:
    std::function<double (double)> f;
    double derivative(double x, double delta = 1e-6);
    int n;
    double x0;
    double eps;

public:
    Newton(std::function<double (double)> f);
    int count(double& x); 
    void setN(int n);
    void setX0(double x0); 
    void setEps(double eps);
    void setFunction(std::function<double (double)>);
};
