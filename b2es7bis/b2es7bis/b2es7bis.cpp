//
//  b2es7bis.cpp
//  b2es7bis
//
//  Created by Roberto Ceola on 08/02/2021.
//

#include "b2es7bis.hpp"
#include <cmath>

float media( const int * v, const int s){
    float somma=0;
    for(int i=0; i<s;i++){
        somma += v[i];
    }
    float m = somma/s;
    return m;
}
