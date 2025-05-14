#include "Newton.hpp"
#include <cmath>
#include <iostream>
#include <functional>

Newton::Newton(std::function<double (double)> f){
    this->f = f;
}

double Newton::derivative(double x, double delta)
{
    return (f(x + delta) - f(x)) / delta;
}

void Newton::setEps(double eps)
{
    this->eps = eps;
}

int Newton::count(double& x)
{
    double _x = x0;

    for (int i = 0; i < n; ++i)
    {

        double d = derivative(_x);
        if (std::fabs(d) < 1e-12)
            return -1;

        double x_next = _x - f(_x) / d;

        if (std::fabs(_x - x_next) <= eps)
        {
            break;
        }

        _x = x_next;


    }

    x = _x;
    return 0;
}

void Newton::setN(int _n)
{
    n = _n;
}

void Newton::setX0(double _x0)
{
    x0 = _x0;
}

void Newton::setFunction(std::function<double (double)> f){
    this->f = f;
}
