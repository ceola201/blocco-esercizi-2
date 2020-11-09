//
//  b2es12main.cpp
//  b2es12
//
//  Created by Roberto Ceola on 09/11/2020.
/* SUP che sceglie un numero a random tra 1 e 1000. Usare la {http://www.cplusplus.com/reference/cstdlib/rand/} funzione {rand} per fare questo. L'utente poi inserisce numeri fintanto che non azzecca la risposta corretta. Il programma guida l'utente rispondendo se il tentativo era maggiore o minore del numero estratto. È una ricerca di tipo binario.*/

#include <iostream>
#include <random>
const int p=1, a=1000; //range di partenza (p) e arrivo (a)

using namespace std;

int main(){
    int toGuess, iGuess; //il numero da indovinare e quello che inserisce man mano l'utente
    //inizializzazione della sequenza random al tempo in cui compiliamo il programma (diverso ogni volta)
    srand (time(NULL));
    toGuess = rand() % p +1;  //(di default parte da 0) cosi parte da uno e arriva a 1000
    do{
        cout<<"indovina il numero da "<< p << " a "<< a<<endl;
        cin>> iGuess;
        if(iGuess<toGuess)
            cout<<"no, il numero da indovinare è maggiore"<<endl;
        else if(iGuess>toGuess)
            cout<<"no, il numero da indovinare è minore"<<endl;
    }while (toGuess != iGuess);
    cout<<"hai indovintato, è proprio "<< toGuess<<endl;
    return 0;
}
