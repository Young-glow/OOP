#pragma once
#include <iostream>
#include <cmath>
#include <functional>


class Dyhotomia
{
private:
    std::function<double (double)> f;
    double a;
    double b;
    double eps;

public:
    Dyhotomia(void);
    ~Dyhotomia(void);

    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);

    int count(double &x);
    bool isSolutionOnSegment();

    double center();

    void belong();

    bool comparisonEps();

    Dyhotomia(std::function<double (double)> f);
};

