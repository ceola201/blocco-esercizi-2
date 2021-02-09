//
//  main.cpp
//  b2es7bis
//
//  Created by Roberto Ceola on 08/02/2021.
// SUP che calcola la media dei voti di un esame. Il programma si fa dare prima il numero totale di studenti, poi i voti.

#include <iostream>
#include <cmath>
#include "b2es7bis.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // aquisizione numero studenti
    int s;
    cout <<"inserisci il numero di studenti"<<endl;
    cin >> s;
    if(s>0){
        int *v = new int [s];       // creo un array per inserire i voti
        cout <<"inseirsci i voti"<<endl;
        for(int i =0;i<s ; i++){
            cin >> v[i];                // aquisisco i voti
        }
        cout <<"la media dei voti è: "<< media(v, s) <<endl; // usa la funzione media
        delete [] v;
    }
    else
        cout<< "il numero è sbagliato" << endl;
    return 0;
}
