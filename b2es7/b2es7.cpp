//
//  b2es7.cpp
//  b2es7
//
//  Created by Roberto Ceola on 06/11/2020.
//

#include "b2es7.hpp"

float media(float v[], int n){
    float m=0, somma=0;
    for(int i=0; i<n; i++){
        somma += v[i];
    }
    m= somma/n;
    return m;
}
