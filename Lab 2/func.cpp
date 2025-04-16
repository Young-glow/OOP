#include "func.hpp"

double distance(const Point &p1, const Point &p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double vProduct(const Vector &v1, const Vector &v2)
{
    return v1.x * v2.y - v1.y * v2.x;
}

bool Triangle::mArea(const Point &P) const
{

    if (isDegenerate())
    {
        if (segmentContains(P))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Triangle T1 = {A, B, P};
    Triangle T2 = {B, C, P};
    Triangle T3 = {C, A, P};

    double S_main = area();
    double S_sum = T1.area() + T2.area() + T3.area();

    return fabs(S_main - S_sum) < 1e-9;
}

bool Triangle::segmentContains(const Point &P) const
{
    double AB = distance(A, B);
    double BC = distance(B, C);
    double AC = distance(A, C);

    int segment;
    
    std::cout << " Увага трикутник вироджений! " << std::endl;

    if (AB > AC && AB > BC)
    {
        segment = 0;
    }
    else if (BC > AB && BC > AC)
    {
        segment = 1;
    }
    else
    {
        segment = 2;
    }

    if (segment == 0)
    {
        bool withinX = P.x >= fmin(A.x, B.x) && P.x <= fmax(A.x, B.x);
        bool withinY = P.y >= fmin(A.y, B.y) && P.y <= fmax(A.y, B.y);
        if (withinX && withinY)
            return true;
    }
    if (segment == 1)
    {
        bool withinX = P.x >= fmin(B.x, C.x) && P.x <= fmax(B.x, C.x);
        bool withinY = P.y >= fmin(B.y, C.y) && P.y <= fmax(B.y, C.y);
        if (withinX && withinY)
            return true;
    }
    if (segment == 2)
    {
        bool withinX = P.x >= fmin(A.x, C.x) && P.x <= fmax(A.x, C.x);
        bool withinY = P.y >= fmin(A.y, C.y) && P.y <= fmax(A.y, C.y);
        if (withinX && withinY)
            return true;
    }
    return false;
}

belongs Triangle::contains(const Point &P) const
{

    if (isDegenerate())
    {
        if (segmentContains(P))
        {
            return belongs::OnBorder;
        }
        else
        {
            return belongs::Outside;
        }
    }

    Vector vAB = {B.x - A.x, B.y - A.y};
    Vector vBC = {C.x - B.x, C.y - B.y};
    Vector vCA = {A.x - C.x, A.y - C.y};

    Vector vAP = {P.x - A.x, P.y - A.y};
    Vector vBP = {P.x - B.x, P.y - B.y};
    Vector vCP = {P.x - C.x, P.y - C.y};

    double a = vProduct(vAB, vAP);
    double b = vProduct(vBC, vBP);
    double c = vProduct(vCA, vCP);

    bool Positive = a > 0 && b > 0 && c > 0; // якщо всі добутки більше або менше нуля, то точка всередині трикутника
    bool Negative = a < 0 && b < 0 && c < 0;
    bool onBorder = a == 0 || b == 0 || c == 0; // якщо хоча б один добуток дорівнює нулю, то точка на границі трикутника

    if (Positive || Negative)
    {
        return belongs::Inside;
    }

    else if (onBorder)
    {
        return belongs::OnBorder;
    }

    else
    {
        return belongs::Outside;
    }
}

bool Triangle::isDegenerate() const
{
    if (area() <= 1e-6)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double Triangle::area() const
{
    return heronArea(*this);
}

double heronArea(const Triangle &t)
{
    double a = distance(t.A, t.B);
    double b = distance(t.B, t.C);
    double c = distance(t.C, t.A);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

Point enterPoint()
{
    std::string str;
    std::cin >> std::ws;
    getline(std::cin, str);
    std::replace(std::begin(str), std::end(str), ',', '.');
    std::stringstream ss(str);
    double x, y;
    if (!(ss >> x >> y))
    {
        std::cout << "Помилка вводу!" << std::endl;
        return Point{0, 0};
    }
    Point p = {x, y};

    return p;
}
