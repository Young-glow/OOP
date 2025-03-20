// в цьому файлі оголошується інформація про ... яку треба компілювати  - імплементація
#include "func.hpp" 
using namespace std;

cina summa(const cina &a, const cina &b)
{
    cina produkt;
    produkt.grn = a.grn + b.grn;
    produkt.kop = a.kop + b.kop;

    int grn = produkt.grn * 100;
    int sum = grn + produkt.kop;

    produkt.grn = sum / 100;
    produkt.kop = sum % 100;

    return produkt;
} 

cina multiply(const cina &a, int sht)
{
    cina produkt;
    
    int mega_kop = (a.grn * 100 + a.kop) * sht;
    produkt.grn = mega_kop / 100;
    produkt.kop = mega_kop % 100;

    return produkt;

}


void round(cina &produkt) 
{
    int ostacha = produkt.kop % 10;
    
    if (ostacha < 5) 
    {
        produkt.kop -= ostacha;
    } 
    
    else 
    {
        produkt.kop += (10 - ostacha);
    }

    if (produkt.kop >= 100) {
        produkt.grn += produkt.kop / 100;
        produkt.kop = produkt.kop % 100;
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
    vector <cina> produkts;
    while (getline(chek, line)) // getline читає файл порядкам до поки вони в ньому є 
    {
        
        regex shykgrn("((\\d+)\\s*грн\\s*(\\d+)\\s*коп),\\s((\\d+)\\s*шт)"); // d - число s - пробіл + - один або більше разів,  * - 0 або більше 
        
        smatch result; // масив результатів пошуку regex

        sregex_iterator begin(line.begin(), line.end(), shykgrn); //спеціальний ітератор для масиву result реджекс
        sregex_iterator end;
        
        if (regex_search(line, result, shykgrn))
        { 
            
            for(sregex_iterator i = begin; i != end; i++)
            {
                cina produkt = {stoi((*i)[1]), stoi((*i)[3])}; // об'єкт produkt типу cina де stoi((*i)[1]) записується в поле grn, stoi((*i)[3]) записується в поле kop
                produkts.push_back(multiply(produkt, stoi((*i)[5]))); 

            }

            
            
        }
        
      
    }
    
    cina mega = {0, 0};
    for(int i = 0; i < produkts.size(); i++)
    {
        mega = summa(mega, produkts[i]);   
    }
    cout << "Сума чека: " << mega.grn << " грн " << mega.kop << " коп" << endl;

    round(mega);
    cout << "Заокруглена сума чека: " << mega.grn << " грн " << mega.kop << " коп" << endl;
    chek.close();
}

