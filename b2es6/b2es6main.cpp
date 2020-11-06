//
//  b2es6main.cpp
//  b2es6
//
//  Created by Roberto Ceola on 05/11/2020.
//SUP un programma che usa due funzioni di conversione della temperatura, da Celsius a Fahrenheit e viceversa. Il programma stampa una tabella ben formattata con entrambe le scale da -40 a +250 gradi Celsius, a intervalli di 0.25 gradi.


#include <iostream>
#include <iomanip>
#include "b2es6.hpp"
using namespace std;
const int NMAX = 291*4 -3;
const float AS = 0.25; //costante aumento scala celsius

int main(){
    float cel[NMAX], far[NMAX];
    //variabile aumento celsuis
    float au=-40;
    //inizializzazione array celsuis
    for(int i=0; i <NMAX; i++){
        cel[i]= au;
        au += AS;
    }
    //inizializzazione array fahrenheit
    for(int i=0; i<NMAX; i++){
        far[i]= fahre(cel[i]);
    }
    //visualizzazione uotput con tabella
    cout<< "| Celsius | Fahrenheit |" <<endl;
    for(int i=0; i<NMAX; i++){
        cout<<"|"<<setw(8)<<right<< setprecision(2) <<fixed<< cel[i] <<setw(2)<< "|" <<" "<<setw(10)<<left<<far[i] <<" |"<<endl;
    }
    cout<<"|_________|____________|"<<endl;
    return 0;
}
