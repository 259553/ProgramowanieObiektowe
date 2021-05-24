#include <iostream>
#include <fstream>
#include "pliki.hpp"
using namespace std;
int zapis(arkusz arkusz1)
{
    ofstream plik("arkusz.csv");
    if (plik.good())
    {
        plik<< ((arkusz1.czyarkusztekstowy())?"1":"0")<<endl;
        plik << arkusz1.zwrocwiersz() << " " << arkusz1.zwrockolumna() << endl;
        for (int w = 0; w < arkusz1.zwrocwiersz(); w++)
        {
            for (int k = 0; k < arkusz1.zwrockolumna(); k++)
            {
                if(arkusz1.czyarkusztekstowy())
                {
                    plik << arkusz1.zwrocwartosctekstowa(w, k) << " ";
                }
                else
                plik << arkusz1.zwrocwartosc(w, k) << " ";
            }
            plik << endl;
        }
        return 0;
    }
    return 1;
}
int odczyt(arkusz *arkusz1)
{
    ifstream plik("arkusz.csv");
    if (plik.good())
    {
        int typ=0;
        plik>>typ;
        bool tekstowa=false;
        if(typ)
        {
            tekstowa=true;
        }
        int wiersze, kolumny;
        plik >> wiersze;
        plik >> kolumny;
        if (wiersze < 1 || kolumny < 1)
        {
            return 2;
        }
        arkusz nowyarkusz(wiersze, kolumny, tekstowa);
        string tekst;
        int temp = 0;
        plik.ignore(10,'\n');
        for (int w = 0; w < wiersze; w++)
        {
            for (int k = 0; k < kolumny; k++)
            {
                if(tekstowa)
                {
                 plik>>tekst;
                 nowyarkusz.edycjawartosc(w,k,tekst);
                }
                else
                {
                plik >> temp;
                nowyarkusz.edycjawartosc(w, k, temp);
                }
            }
        }
        *arkusz1 = nowyarkusz;
        return 0;
    }
    return 1;
}