///@file
#pragma once
#include <string>
class komorka
{
    int wartoscliczbowa = 0;
    std::string wartosctekstowa = "";
    bool tekstowa;

public:
    komorka()
    {
        tekstowa = false;
    }
    komorka(bool czytekstowa) : tekstowa(czytekstowa)
    {
    }
    void ustawwartosc(int wartosc);
    void ustawwartosc(std::string wartosc);
    int zwrocwartoscliczbowa();
    std::string zwrocwartosctekstowa();
    bool czytekstowa();
};
class arkusz
{
    int wiersz;
    int kolumna;
    komorka **tablica;
    bool czytekstowa;

public:
    /** funkcja do tworzenia nowego arkusza
 * 
 * 
 * funkcja zajmujaca sie tworzeniem arkusza o poprawnych rozmiarach
 * 
 * 
 */
    int tworzarkusz(int w, int k);
    arkusz()
    {
    }
    arkusz(int wiersze, int kolumny, bool tekstowa);
    /**
 * 
 * 
 * funkcja umozliwajaca edycje wartosci w konkretnych komorkach arkusza
 * 
 * 
 */
    int edycjawartosc(int w, int k, int wartosc);
    int zwrocwartosc(int w, int k);
    int edycjawartosc(int w, int k, std::string wartosc);
    std::string zwrocwartosctekstowa(int w, int k);
    int zwrocwiersz();
    int zwrockolumna();
    bool czyarkusztekstowy();
};
void wyswietl(arkusz arkusz1);