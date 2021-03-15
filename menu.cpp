#include<iostream>
using namespace std;
void stworz()
{
int kolumny;
int wiersze;
cout<<"Jaki ma byc rozmiar arkusza?"<<endl;
cout<<"Liczba kolumn: ";
cin>>kolumny;
cout<<"Liczba wierszy ";
cin>>wiersze;
system("cls");
cout<<"Twoj arkusz ma rozmiar "<<wiersze<<"X"<<kolumny<<endl;
}

int main()
{
int liczba;
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
break;

case 2:
break;

case 3:
break;
}
}while (liczba != 0)
cout<<"Do widzenia!"<<endl;
}
