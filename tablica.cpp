#include <iostream>
#include "tablica.hpp"
using namespace std;

int edycjawartosc(arkusz *arkusz1, int w, int k, int wartosc)
{
  if (arkusz1->wiersz < w || arkusz1->kolumna < k)
  {
    return 1;
  }
  else if (w < 0 || k < 0)
  {
    return 1;
  }
  else
  {
    arkusz1->tablica[w][k] = wartosc;
  }
  return 0;
}

int tworzarkusz(arkusz *arkusz1, int w, int k)
{
  if (w < 1 || k < 1)
  {
    return 1;
  }
  arkusz1->wiersz = w;
  arkusz1->kolumna = k;
  arkusz1->tablica = new int *[w];
  for (int i = 0; i < w; i++)
  {
    arkusz1->tablica[i] = new int[k];
  }
  return 0;
}