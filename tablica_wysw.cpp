#include<iostream>
#include "tablica.hpp"
using namespace std;
void wyswietl(arkusz arkusz1 )
{
for (int w=0; w<arkusz1.wiersz; w++)
  { 
   for( int k=0; k<arkusz1.kolumna; k++)
    {
     cout<<"Komorka "<<w<<","<<k<<" = "<<arkusz1.tablica[w][k];
     cout<<"\t";
    }
    cout<<"\n";
  }
}
