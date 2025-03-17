#include "func.hpp" 
// в цьому файлі оголошується інформація про ... яку треба компілювати  - імплементаця
using namespace std;

int summa(cina produkt, int sht)
{
    int grn = produkt.grn * 100;
    int kop = produkt.kop;
    int sum = (grn + kop) * sht;
    return sum;
}

void round(int &grn, int &kop) 
{
    int ostacha = kop % 10;
    
    if (ostacha < 5) 
    {
        kop -= ostacha;
    } 
    
    else 
    {
        kop += (10 - ostacha);
    }

    if (kop >= 100) {
        grn += kop / 100;
        kop = kop % 100;
    }
}

void file()
{
    ifstream chek("chek.txt");

    if (chek.is_open())
    {
        cout << "File was opened" << endl;
    }
    else
    {
        cerr << "Failed to open file" << endl;
        return;
    }

    
    string line;
    int ultra_sum = 0;
    while (getline(chek, line)) // getline читає файл порядкам до поки вони в ньому є 
    {
        
        regex shykgrn("((\\d+)\\s*грн\\s*(\\d+)\\s*коп),\\s((\\d+)\\s*шт)"); // d - число s - пробіл + - один або більше разів,  * - 0 або більше 
        
        smatch result; // змінна що зберігає результат пошуку

        sregex_iterator begin(line.begin(), line.end(), shykgrn); //спеціальний ітератор для масиву result реджекс
        sregex_iterator end;
        
        if (regex_search(line, result, shykgrn))
        { 
            
            for(sregex_iterator i = begin; i != end; i++){
                cina produkt = {stoi((*i)[1]), stoi((*i)[3])}; // об'єкт produkt типу cina де stoi((*i)[1]) записується в поле grn, stoi((*i)[3]) записується в поле kop
                ultra_sum +=summa(produkt, stoi((*i)[5]));
            }

            
            
        }
        
      
    }
    int grn = ultra_sum / 100;       
    int kop = ultra_sum % 100;
    cout << "Сумма чека: " << grn << " грн " << kop << " коп" << endl;

    round(grn, kop);
    cout << "Заокруглена сумма чека: " << grn << " грн " << kop << " коп" << endl;
    chek.close();
}

