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
    tablica[w][k]->ustawwartosc(wartosc);
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
    tablica[w][k]->ustawwartosc(wartosc);
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
  tablica = new komorka **[w];
  for (int i = 0; i < w; i++)
  {
    tablica[i] = new komorka *[k];
    for (int j = 0; j < k; j++)
    {
      if (czytekstowa[j])
      {
        tablica[i][j] = new komorkatekstowa();
      }
      else
      {
        tablica[i][j] = new komorkatekstowa();
      }
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
    return tablica[w][k]->zwrocwartoscliczbowa();
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
    return tablica[w][k]->zwrocwartosctekstowa();
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

arkusz::arkusz(int wiersze, int kolumny, bool *tekstowa)
{
  czytekstowa = tekstowa;
  tworzarkusz(wiersze, kolumny);
}

void komorkaliczbowa::ustawwartosc(int wartosc)
{
  this->wartosc = wartosc;
}
void komorkaliczbowa::ustawwartosc(std::string wartosc)
{
  this->wartosc = 0;
}
int komorkaliczbowa::zwrocwartoscliczbowa()
{
  return wartosc;
}
string komorkaliczbowa::zwrocwartosctekstowa()
{
  return std::to_string(wartosc);
}
bool komorkaliczbowa::czytekstowa()
{
  return false;
}

bool arkusz::czykolumnatekstowa(int k)
{
  return czytekstowa[k];
}

void komorkatekstowa::ustawwartosc(int wartosc)
{
  this->wartosc = to_string(wartosc);
}
void komorkatekstowa::ustawwartosc(std::string wartosc)
{
  this->wartosc = wartosc;
}
int komorkatekstowa::zwrocwartoscliczbowa()
{
  return 0;
}
string komorkatekstowa::zwrocwartosctekstowa()
{
  return wartosc;
}
bool komorkatekstowa::czytekstowa()
{
  return true;
}
