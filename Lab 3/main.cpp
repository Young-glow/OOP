#include "Dyhotomia.hpp"
#include "Newton.hpp"
#include <iostream>

int main()
{
    std::cout << "Enter method: \n";
    std::cout << "1 - Dyhotomia" << std::endl;
    std::cout << "2 - Newton" << std::endl;

    int method;
    std::cin >> method;

    if (method != 1 && method != 2)
    {
        std::cout << "Invalid method" << std::endl;
        return 0;
    }

    if (method == 1)
    {
        std::cout << "Enter a, b, eps: ";
        double a, b, eps, x;
        std::cin >> a >> b >> eps;

        Dyhotomia* dPtr = new Dyhotomia;
        dPtr->setVolumes(a, b);
        dPtr->setTolerance(eps);

        if (dPtr->count(x) == 0)
        {
            std::cout << "x = " << x << std::endl;
        }
        else
        {
            std::cout << "X doesn't exist" << std::endl;
        }
        delete dPtr;
    }

    if (method == 2)
    {
        std::cout << "Enter a, b, n, x0 (initial guess): ";
        double a, b, x0, x;
        unsigned int n;
        std::cin >> a >> b >> n >> x0;
    
        Newton* nPtr = new Newton();
        nPtr->setRange(a, b);
        nPtr->setN(n);
        nPtr->setX0(x0);
    
        if (nPtr->count(x) == 0)
        {
            std::cout << "x = " << x << std::endl;
        }
        else
        {
            std::cout << "X doesn't exist" << std::endl;
        }
    
        delete nPtr;
    }    

    return 0;
}
