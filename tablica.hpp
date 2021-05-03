///@file
#pragma once
struct arkusz
{
    int wiersz;
    int kolumna;
    int **tablica;
};
/**
 * 
 * 
 * funkcja umozliwajaca edycje wartosci w konkretnych komorkach arkusza
 * 
 * 
 */
int edycjawartosc(arkusz*arkusz1, int w, int k, int wartosc);
void wyswietl(arkusz arkusz1 );
/** funkcja do tworzenia nowego arkusza
 * 
 * 
 * funkcja zajmujaca sie tworzeniem arkusza o poprawnych rozmiarach
 * 
 * 
 */
int tworzarkusz(arkusz *arkusz1, int w, int k);