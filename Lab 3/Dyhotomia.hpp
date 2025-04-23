#ifndef _DYHOTOMIA_HPP_
#define _DYHOTOMIA_HPP_
#include <cmath>

class Dyhotomia
{
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

private:
    double f(double x);
    double a;
    double b;
    double eps;
};

#endif