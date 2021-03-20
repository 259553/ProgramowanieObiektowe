#include<iostream>
#include"menu.hpp"
#include"tablica.hpp"
using namespace std;
void menu()
{
int wiersze;
int kolumny;    
int liczba;
int** tablica=stworz(wiersze,kolumny);
cout <<"Witaj uzytkowniku!"<<endl;
cout <<"Korzystasz z arkusza kalkulacyjnego"<<endl;
cout <<"Co chcesz zrobic?"<<endl;
cout <<endl;
cout<<"1.Stworz arkusz"<<endl;
cout<<"2.Edytuj zawartosc"<<endl;
cout<<"3.Wyswietl zawartosc"<<endl;
cout<<"0.Wylacz program"<<endl;
do
 {
 cin>> liczba;
 switch(liczba)
  {
  case 1:
  stworz(wiersze,kolumny);
  break;

  case 2:
  edycja(wiersze,kolumny,tablica);
  break;
  
  case 3:
  wyswietl(wiersze,kolumny,tablica);
  break;
  }
 }while (liczba != 0);
cout<<"Do widzenia!"<<endl;
}

