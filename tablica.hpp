///@file
#pragma once
#include <string>
/**
 * @brief klasa interfejsowa komorka
 * 
 */
class komorka
{
public:
/**
 * @brief ustawia wartosc komorki
 * 
 * @param wartosc nowa wartosc ktora komorka powinna przyjac
 */
    virtual void ustawwartosc(std::string wartosc) = 0;
    virtual std::string zwrocwartosctekstowa() = 0;
    virtual bool czytekstowa() = 0;
};
class komorkaliczbowa : public komorka
{
    int wartosc = 0;

public:
    void ustawwartosc(std::string wartosc);
    std::string zwrocwartosctekstowa();
    bool czytekstowa();
};
class komorkatekstowa : public komorka
{
    std::string wartosc = ".";

public:
    void ustawwartosc(std::string wartosc);
    std::string zwrocwartosctekstowa();
    bool czytekstowa();
};
class arkusz
{
    int wiersz;
    int kolumna;
    komorka ***tablica;
    bool *czytekstowa;

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
    arkusz(int wiersze, int kolumny, bool *tekstowa);
    /**
 * 
 * 
 * funkcja umozliwajaca edycje wartosci w konkretnych komorkach arkusza
 * 
 * 
 */
    int zwrocwartosc(int w, int k);
    int edycjawartosc(int w, int k, std::string wartosc);
    std::string zwrocwartosctekstowa(int w, int k);
    int zwrocwiersz();
    int zwrockolumna();
    bool czykolumnatekstowa(int k);
    int rozszerz(int x, int y, bool v);
};
void wyswietl(arkusz arkusz1);