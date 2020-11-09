//
//  b2es11main.cpp
//  b2es11
//
//  Created by Roberto Ceola on 07/11/2020.
//Un intero è detto perfetto quando la somma dei suoi fattori restituisce il numero stesso. Ad esempio 6 è numero perfetto essendo che 1 + 2 + 3 = 6. Scrivere una funzione che determina se un numero è perfetto. Usarla per ricavare tutti i numeri perfetti da 1 a 1000.

#include <iostream>
#include "b2es11.hpp"
using namespace std;
const int N =1001;      //uno in più perche l'indice 0 non viene considerato

int main(){
    int c=0;        //variabile per controllare se n è perfetto
    bool a[N];       /*a[0] non viene cosiderato nei cicli quindi si è aggiunto uno spazio in più per non uscire dal range*/
    //inizilalizzazione array con indice i numeri a false
    for(int i=0;i<=N;i++){
        a[i]=false;
    }
    for(int i=1;i<=N;i++){
        c=0;        //inizializzazione ogni volta che si controlla un nuovo numero
        for(int j=1; j<i;j++){
            if(Divis (i, j)==true){
                c += j;  //aggiungo alla variabile di controllo di tutti i divisori
            }
        }
        if(i==c)
            a[i]=true; //il valore dell'array di indice un numero perfetto è true
    }
    cout<<"i numeri perfetti da uno a mille sono "<<endl;
    for(int i=0;i<=N;i++){
        if(a[i]==true)
            cout<< i <<endl;
    }
    return 0;
}
