// в цьому файлі оголошується інформація про ... яку не треба компілювати  - декларація
#include <iostream> 
#include <string>
#include <fstream>
#include <regex>
#include <vector>
#include <windows.h> // бібліотека для використання функцій віндовс і щоб коректно виводилась кирилиця

struct cina
{
    int grn;
    short int kop;
};

cina summa(const cina &a, const cina &b);
cina multiply(const cina &a, int sht);
void round(cina &produkt);
void file();

