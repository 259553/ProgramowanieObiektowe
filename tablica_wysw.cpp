#include<iostream>
using namespace std;
void wyswietl(int wiersze,int kolumny, int** tablica )
{
for (int w=0; w<wiersze; w++)
  { 
   for( int k=0; k<kolumny; k++)
    {
     cout<<"Komorka "<<w<<","<<k<<" = "<<tablica [w][k];
     cout<<"\t";
    }
    cout<<"\n";
  }
}
