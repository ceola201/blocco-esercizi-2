//
//  b2es5main.cpp
//  b2es5
//
//  Created by Roberto Ceola on 04/11/2020.
//SUP che calcola l'ipotenusa dati i due cateti. 

#include "b2es5.hpp"
#include <iostream>
#include <cmath>


using namespace std;

int main(){
    float a, b, c;
    cout<<"inserisci i due cateti"<<endl;
    cin>> a >> b;
    c = ipot(a, b);
    cout<< c <<endl;
    return 0;
}
