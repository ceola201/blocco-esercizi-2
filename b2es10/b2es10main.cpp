//
//  b2es10main.cpp
//  b2es10
//
//  Created by Roberto Ceola on 09/11/2020.
//Modificare il programma dei numeri primi cambiando il limite superiore della ricerca di divisori perfetti con la radice del numero sotto esame, anziché la sua metà. Confrontare l'output del nuovo algoritmo con quello vecchio.
// (Provare a cercare online come si fa a temporizzare l'esecuzione di un programma e stimare il guadagno in velocità con questa modifica)

#include <iostream>
#include "prime.hpp"
using namespace std;

int main(){
    int n;
    cout <<"inserisci il numero "<<endl;
    cin >> n;
    bool check;
    check= primeEvolution(n);
    if(check==true)
        cout<<"il numero è primo"<<endl;
    else cout<<"il numero non è primo"<<endl;
    
    return 0;
}
