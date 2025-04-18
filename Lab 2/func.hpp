#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
#include <algorithm>
#include <sstream>

struct Point 
{
    double x, y;
};

typedef Point Vector; // синомізує вектор і точку  

double distance(const Point &p1, const Point &p2);

double vProduct(const Vector &v1, const Vector &v2);

enum class belongs // варіанти значень для функції contains
{
    Outside,
    Inside,
    OnBorder
};

struct Triangle
{
    Point A, B, C;

    double area() const;

    bool mArea(const Point &P) const;

    bool segmentContains(const Point& P) const;

    belongs contains(const Point &P) const;

    bool isDegenerate() const;
};

double heronArea(const Triangle &t);


Point enterPoint();
