#include <iostream>
#include "tablica.hpp"
using namespace std;

int arkusz::edycjawartosc(int w, int k, int wartosc)
{
  if (wiersz < w || kolumna < k)
  {
    return 1;
  }
  else if (w < 0 || k < 0)
  {
    return 1;
  }
  else
  {
    tablica[w][k].ustawwartosc(wartosc);
  }
  return 0;
}

int arkusz::edycjawartosc(int w, int k, std::string wartosc)
{
  if (wiersz < w || kolumna < k)
  {
    return 1;
  }
  else if (w < 0 || k < 0)
  {
    return 1;
  }
  else
  {
    tablica[w][k].ustawwartosc(wartosc);
  }
  return 0;
}

int arkusz::tworzarkusz(int w, int k)
{
  if (w < 1 || k < 1)
  {
    return 1;
  }
  wiersz = w;
  kolumna = k;
  tablica = new komorka *[w];
  for (int i = 0; i < w; i++)
  {
    tablica[i] = new komorka[k];
    for(int j=0;j<k;j++)
    {
      tablica[i][j]=komorka(czytekstowa);
    }
  }
  return 0;
}

int arkusz::zwrocwartosc(int w, int k)
{
  if (w < 0 || k < 0)
  {
    return 0;
  }
  else if (w >= wiersz || k >= kolumna)
  {
    return 0;
  }
  else
  {
    return tablica[w][k].zwrocwartoscliczbowa();
  }
}

std::string arkusz::zwrocwartosctekstowa(int w, int k)
{
  if (w < 0 || k < 0)
  {
    return 0;
  }
  else if (w >= wiersz || k >= kolumna)
  {
    return 0;
  }
  else
  {
    return tablica[w][k].zwrocwartosctekstowa();
  }
}

int arkusz::zwrocwiersz()
{
  return wiersz;
}
int arkusz::zwrockolumna()
{
  return kolumna;
}

arkusz::arkusz(int wiersze, int kolumny, bool tekstowa)
{
  czytekstowa=tekstowa;
  tworzarkusz(wiersze, kolumny);
}

void komorka::ustawwartosc(int wartosc)
{
 wartoscliczbowa=wartosc;
}
void komorka::ustawwartosc(std::string wartosc)
{
 wartosctekstowa=wartosc;
}
int komorka::zwrocwartoscliczbowa()
{
  if(tekstowa)
  {
    return 0;
  }
  else
  return wartoscliczbowa;
}
string komorka::zwrocwartosctekstowa()
{
  if(tekstowa)
  {
  return wartosctekstowa;
  }
  else
  return std::to_string(wartoscliczbowa);
}
bool komorka::czytekstowa()
{
  return tekstowa;
}

bool arkusz::czyarkusztekstowy()
{
  return czytekstowa;
}