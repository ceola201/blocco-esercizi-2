//
//  b2es2.cpp
//  b2es2
//
//  Created by Roberto Ceola on 02/11/2020.
// riscrivere b2es1 usando gli array

#include <iostream>
using namespace std;

int main(){
    int a[10];
    for (int i=0; i<10;i++)
    a[i]=0;
    int r= 1000000, somma=0;
    for (int i=0; i<10;i++){
        cout<<"inserisci un numero"<<endl;
        cin>>a[i];
        if(a[i]==0)
            break;
        if(a[i]>r){
            cout<<"il numero è troppo grande"<<endl;
            i -=1;
        }
    }
    for(int i=0;i<10;i++){
        somma += a[i];
    }
    cout<<"la somma è "<<somma<<endl;
    return 0;
}
