#include <iostream>
#include "menu.hpp"
#include "pliki.hpp"
using namespace std;
void menu()
{
  int liczba;
  arkusz tablica;
  while (stworz(&tablica))
    ;
  cout << "Witaj uzytkowniku!" << endl;
  cout << "Korzystasz z arkusza kalkulacyjnego" << endl;
  do
  {
    cout << "Co chcesz zrobic?" << endl;
    cout << endl;
    cout << "1.Stworz arkusz" << endl;
    cout << "2.Edytuj zawartosc" << endl;
    cout << "3.Wyswietl zawartosc" << endl;
    cout << "4.Zapisz tablice" << endl;
    cout << "5.Wczytaj tablice" << endl;
    cout << "0.Wylacz program" << endl;
    cin >> liczba;
    system("clear");
    switch (liczba)
    {
    case 1:
      stworz(&tablica);
      break;

    case 2:
      edycja(&tablica);
      break;

    case 3:
      wyswietl(tablica);
      break;

    case 4:
      if (zapis(tablica))
      {
        cout << "Nieprawidlowa nazwa lub brak dostepu do pliku" << endl;
      }
      break;

    case 5:
      switch (odczyt(&tablica))
      {
      case 1:
        cout << "Nieprawidlowa nazwa lub brak dostepu do pliku" << endl;
        break;

      case 2:
        cout << "Nieprawidlowy format pliku lub nieprawidlowe dane" << endl;
        break;

      case 0:
        cout << "Plik wczytany" << endl;
        break;
      }
      break;
    }
  } while (liczba != 0);
  cout << "Do widzenia!" << endl;
}

int stworz(arkusz *arkusz1)
{
  int wiersz;
  int kolumna;
  cout << "Jaki ma byc rozmiar arkusza?" << endl;
  cout << "Liczba kolumn: ";
  cin >> kolumna;
  cout << "Liczba wierszy ";
  cin >> wiersz;
  if (arkusz1->tworzarkusz(wiersz, kolumna))
  {
    cout << "Niepoprawny rozmiar" << endl;
    return 1;
  }
  cout << "Jakiego typu ma byc tablica?" << endl;
  cout << "Wprowadz 1 dla tekstowej" << endl;
  int pomocnicza = 0;
  cin >> pomocnicza;
  bool typ = false;
  if (pomocnicza == 1)
  {
    typ = true;
  }
  arkusz nowyarkusz(wiersz, kolumna, typ);
  *arkusz1 = nowyarkusz;
  system("clear");
  cout << "Twoj arkusz ma rozmiar " << wiersz << "X" << kolumna << endl;
  cout << "Uzupelnij arkusz" << endl;
  int temp = 0;
  string tekst = "";
  for (int w = 0; w < wiersz; w++)
  {
    for (int k = 0; k < kolumna; k++)
    {
      cout << "Komorka " << w << "," << k << " = ";
      if (typ)
      {
        cin >> tekst;
        arkusz1->edycjawartosc(w, k, tekst);
      }
      else
      {
        cin >> temp;
        arkusz1->edycjawartosc(w, k, temp);
      }
    }
  }
  return 0;
}

void edycja(arkusz *arkusz1)
{
  int w;
  int k;
  int wartosc;
  string tekst;
  cout << "Wybierz wiersz: ";
  cin >> w;
  cout << "Wybierz komokre: ";
  cin >> k;
  cout << "Wybierz wartosc: ";
  if (arkusz1->czyarkusztekstowy())
  {
    cin >> tekst;
    if (arkusz1->edycjawartosc(w, k, tekst))
    {
      cout << "Niepoprawna wybrana wartosc" << endl;
    }
  }
  else
  {
    cin >> wartosc;
    if (arkusz1->edycjawartosc(w, k, wartosc))
    {
      cout << "Niepoprawna wybrana wartosc" << endl;
    }
  }
}