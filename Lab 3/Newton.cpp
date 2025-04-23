#include "Newton.hpp"
#include <cmath>

double Newton::f(double x)
{
    return 3 * x - 4 * std::log(x) - 5;
}

double Newton::derivative(double x, double delta)
{
    return (f(x + delta) - f(x)) / delta;
}

int Newton::count(double& x)
{
    double _x = x0;

    for (int i = 0; i < n; ++i)
    {
        double d = derivative(_x);
        if (std::abs(d) < 1e-12)
            return -1;

        _x = _x - f(_x) / d;

        if (_x < a || _x > b)
            return -1;
    }

    x = _x;
    return 0;
}

void Newton::setN(int _n)
{
    n = _n;
}

void Newton::setRange(double _a, double _b)
{
    a = _a;
    b = _b;
}

void Newton::setX0(double _x0)
{
    x0 = _x0;
}
