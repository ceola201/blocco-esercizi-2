//
//  b2es5.cpp
//  b2es5
//
//  Created by Roberto Ceola on 04/11/2020.
//

#include "b2es5.hpp"
#include <cmath>
#include <iostream>

float ipot(float x, float y)
{
    float result, intermedio;
    intermedio = pow(x, 2) + pow(y, 2);
    result = sqrt(intermedio);
    return result;
}
