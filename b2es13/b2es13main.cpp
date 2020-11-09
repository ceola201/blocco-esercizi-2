//
//  b2es13main.cpp
//  b2es13
//
//  Created by Roberto Ceola on 09/11/2020.
//SUP che prende in input (oppure scritti direttamente nel codice, nell'inizializzazione dell'array) 20 numeri e ristampa l'array ordinato per ordine ascendente. Usare due cicli  innestati, dove quello più interno confronta due numeri adiacenti, scambiandoli se fuori ordine. Il ciclo esterno continua fintanto che durante un ciclo completo non avvengono più scambi, quando quindi tutti i numeri sono in ordine.

#include <iostream>

using namespace std;
#define N 20

int main(){
    int a[N], s;        //array e variabile s di scambio
    cout<<"inserisci i "<< N<<" numeri"<<endl;
    for(int i=0; i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(a[i]<a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }
    cout<< "la sequenza ordinata è "<<endl;
    for(int i=0;i<N;i++){
        cout<<a[i]<<", ";
    }
    cout<<endl;
    return 0;
}
