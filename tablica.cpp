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
int* tablica = new int[wiersze] [kolumny]
system("cls");
cout<<"Twoj arkusz ma rozmiar "<<wiersze<<"X"<<kolumny<<endl;
cout<<"Uzupelnij arkusz"<<endl;
for (int w=0; w<wiersze; w++)
 {
  for (int k=0; k<kolumny; k++)
   {
    cout<<"Komorka "<<w<<","<<k<<" = ";
    cin>>tablica[w][k]
   }
 }
}
