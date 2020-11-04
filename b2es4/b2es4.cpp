//
//  b2es4.cpp
//  b2es4
//
//  Created by Roberto Ceola on 04/11/2020.
//

#include "b2es4.hpp"
#include <iostream>
#include <cmath>
using namespace std;

void approx(float x, int y)
{
    cout<<"inserisci un numero decimale"<<endl;
    cin>>x;
    y = round(x);
    cout<< y <<endl;
}
