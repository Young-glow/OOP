#include "func.hpp"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    Triangle T = {{0, 0}, {0, 0}, {0, 0}};
    
    std::cout << "Введість трикутник: \n Перша точка: ";
    T.A = enterPoint();
    std::cout << " Друга точка: ";
    T.B = enterPoint();
    std::cout << " Третя точка: ";
    T.C = enterPoint();

    if(T.isDegenerate())
    {
        return 0;
    }

    unsigned int n;
    std::cout << "Введіть кількість точок: "; 
    std::cin >> n;
    

    Point P;
    int m;

    do 
    {
        std::cout << "1. Метод площ \n2. Метод векторного добутку \nОберіть метод: "; 
        std::cin >> m;
        if (m != 1 && m != 2) 
        {
            std::cout << "Некоректний вибір. Будь ласка, оберіть 1 або 2." << std::endl;
        }
    } 
    while (m != 1 && m != 2);
    
    for(int i = 0; i < n; i++)
        {
            std::cout << " Точка " << i+1 << ": ";
            P = enterPoint();

            if(m == 1)
            {
                if(T.mArea(P))
                {
                    std::cout << "Точка належить трикутнику" << std::endl;
                }
                else
                {
                    std::cout << "Точка не належить трикутнику" << std::endl;
                }   
            }
            
            else
            {
                if(T.contains(P) == belongs::Inside)
                {
                    std::cout << "Точка належить трикутнику" << std::endl;
                } 
                
                else if(T.contains(P) == belongs::OnBorder)
                {
                    std::cout << "Точка належить границі трикутника" << std::endl;
                } 
                
                else
                {
                    std::cout << "Точка не належить трикутнику" << std::endl;
                } 
            }   
    
        }
    return 0;
}
