//
//  b2es9main.cpp
//  b2es8
//
//  Created by Roberto Ceola on 07/11/2020.
//
//trova i due numeri più grandi

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
    //cerco i massimi
    int max, max2;
    for(int i=0; i<N;i++){
        if(i==0){
            max=a[i];
            max2=a[i];
        }
        else if(a[i]>max)
            if(a[i]>max2)
                max2=a[i];
            max=a[i];
        cout<<"il massimi corrente sono "<<max<<" e "<<max2<<endl;      //visulazzo cosa accade
    }
    cout<<"il massimi sono "<<max<<" e "<<max2<< endl;
    return 0;
}
