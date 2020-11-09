//
//  primeEvolution.cpp
//  EsInClasse
//
//  Created by Roberto Ceola on 09/11/2020.
//

#include "prime.hpp"

#include <cmath>

bool primeEvolution (int n){
    bool isprime=true;
    int a;
    a= sqrt(n);
    if(n==1 || n==0)
        isprime = false;
    else{
        for(int i=2;i<=a;i++){
            if(n%i==0)
                isprime=false;
        }
    }
    return isprime;
}
