//
//  b2es8main.cpp
//  b2es8
//
//  Created by Roberto Ceola on 06/11/2020.
//trova il piu grande

#include <iostream>
using namespace std;
const int N=10;

int main(){
    //acquisizione numeri
    int a[N];
    cout<<"inserisci 10 numeri interi"<<endl;
    for(int i=0;i<N; i++){
        cin>>a[i];
    }
    //cerco il massimo
    int max;
    for(int i=0; i<N;i++){
        if(i==0){
            max=a[i];
        }
        else if(a[i]>max)
            max=a[i];
        cout<<"il massimo corrente è "<<max<<endl;      //visulazzo cosa accade
    }
    cout<<"il massimo è  "<<max<<endl;
    return 0;
}
