//
//  b2es7main.cpp
//  b2es7
//
//  Created by Roberto Ceola on 06/11/2020.
// SUP che calcola la media dei voti di un esame. Il programma si fa dare prima il numero totale di studenti, poi i voti. Supporre un limite massimo di studenti.

#include <iostream>
#include "b2es7.hpp"
using namespace std;

int main(){
    //acquisizione numero studenti
    int n;
    do { cout<<"inserisci il numero di studenti"<<endl;
    cin>>n;
    if(n>50)
        cout<<"supera il limite massimo!"<<endl;
    } while(n>50);
    //inizializzazione vettore con in voti
    float a[n];
    for(int i=0; i<n; i++){
        cout<<"inserisci il voto dello studente corrente"<<endl;
        cin>> a[i];
    }
    //calcolo media e rappresentsazione output;
    cout<<"la media è "<< media(a, n)<<endl;
    return 0;
}
