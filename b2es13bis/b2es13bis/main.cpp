//
//  main.cpp
//  b2es13bis
//
//  Created by Roberto Ceola on 08/02/2021.
// riordinare un array in ordine crescente

#include <iostream>
#include "b2es13bis.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout << "inserisci la diensione dell'array"<<endl;
    cin >> n;
    if (n>0){
        int *a = new int [n];
        //acquisizione array
        cout << "inserisci i valori interi dell'array"<<endl;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        //riordino array
        int * b;
        b = ord(a, n);
        //stampo array ordinato
        cout << "l'array ordinato in ordine crescente è: "<< endl;
        for(int i=0; i<n; i++){
            cout << b[i] << "   ";
        }
        cout<<endl;
        delete [] a;
    }
    else
        cerr << "dimensione non valida"<<endl;
    return 0;
}
