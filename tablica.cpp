#include <iostream>
#include"tablica.hpp"
using namespace std;
int** stworz(int &wiersze, int &kolumny)
{
  cout << "Jaki ma byc rozmiar arkusza?" << endl;
  cout << "Liczba kolumn: ";
  cin >> kolumny;
  cout << "Liczba wierszy ";
  cin >> wiersze;
  int **tablica = new int *[wiersze];
  for (int i = 0; i < wiersze; i++)
  {
    tablica[i]=new int[kolumny];
  }
  system("clear");
  cout << "Twoj arkusz ma rozmiar " << wiersze << "X" << kolumny << endl;
  cout << "Uzupelnij arkusz" << endl;
  for (int w = 0; w < wiersze; w++)
  {
    for (int k = 0; k < kolumny; k++)
    {
      cout << "Komorka " << w << "," << k << " = ";
      cin >> tablica[w][k];
    }
  }
  return tablica;
}

void edycja(int wiersze, int kolumny, int **tablica)
{
  int w;
  int k;
  cout<<"Wybierz wiersz: ";
  cin>>w;
  cout<<"Wybierz komokre: ";
  cin>>k;
  cout<<"Wybierz wartosc: ";
  cin>>tablica[w][k];
}
