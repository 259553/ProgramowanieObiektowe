#include <iostream>
#include <fstream>
#include "pliki.hpp"
using namespace std;
int zapis(arkusz arkusz1)
{
    ofstream plik("arkusz.csv");
    if (plik.good())
    {
        plik << arkusz1.wiersz << " " << arkusz1.kolumna << endl;
        for (int w = 0; w < arkusz1.wiersz; w++)
        {
            for (int k = 0; k < arkusz1.kolumna; k++)
            {
                plik << arkusz1.tablica[w][k] << " ";
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
        int wiersze, kolumny;
        plik >> wiersze;
        plik >> kolumny;
        if (wiersze < 1 || kolumny < 1)
        {
            return 2;
        }
        arkusz1->kolumna = kolumny;
        arkusz1->wiersz = wiersze;
        for (int w = 0; w < wiersze; w++)
        {
            for (int k = 0; k < kolumny; k++)
            {
                plik >> arkusz1->tablica[w][k];
            }
        }

        return 0;
    }
    return 1;
}