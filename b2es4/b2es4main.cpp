//
//  b2es4main.cpp
//  b2es4
//
//  Created by Roberto Ceola on 04/11/2020.
// SUP che legge diversi numeri decimali e successivamente ristampa questi approssimati all'intero più vicino. Usare la funzione di libreria round. Stampare i numeri come interi, quindi non 42.0 ma 42.

#include <iostream>
#include <cmath>
#include "b2es4.hpp"

using namespace std;

int main(){
    float x;
    int y;
    bool risp, rif=1;
    do{
        approx (x, y);
        cout<<"vuoi approssimare ancora?"<<endl;
        cin>>risp;
    }while(risp == rif);
    return 0;
}
