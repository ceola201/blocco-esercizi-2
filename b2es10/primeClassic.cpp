//
//  primeClassic.cpp
//  EsInClasse
//
//  Created by Roberto Ceola on 09/11/2020.
//

#include "prime.hpp"

bool primeClassic (int n){
    bool isprime=true;
    if(n==1 || n==0)
        isprime = false;
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0)
                isprime= false;
        }
    }
    return isprime;
}
