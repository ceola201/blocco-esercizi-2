//
//  b2es1.cpp
//  b2es1
//
//  Created by Roberto Ceola on 02/11/2020.
//  1) SUP che legge 10 numeri dall'utente e ne calcola la somma. Fermarsi a leggere numeri quando l'utente inserisce tutti i 10 numeri oppure quando inserisce 0, stabilendo un numero massimo a priori.

//( Il limite massimo dipende da quanto grandi decidiamo che siano le strutture in fase di compilazione. Impareremo che è possibile scrivere programmi che non hanno questo tipo di limite)
#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int p=1000000;
    int x, j=0;
    int somma=0;
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, l=0;
    do {
        cout<<"inserisci un numero"<<endl;
        cin >>x;
        if(x>p){
            cout<<"il numero è troppo grande"<<endl;
            j-=1;
          }
        else {
            switch (j) {
                case 0: a=x; break;
                case 1: b=x; break;
                case 2: c=x; break;
                case 3: d=x; break;
                case 4: e=x; break;
                case 5: f=x; break;
                case 6: g=x; break;
                case 7: h=x; break;
                case 8: i=x; break;
                case 9: l=x; break;
            }
        }
        j++;
    } while ((x!=0) &&  (j<10));
    somma=a+b+c+d+e+f+g+h+i+l;
    cout <<"la somma è "<< somma<<endl;
    return 0;
}
