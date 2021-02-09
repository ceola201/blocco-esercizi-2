//
//  main.cpp
//  b2es11bis
//
//  Created by Roberto Ceola on 07/02/2021.
//

#include <iostream>
using namespace std;
const int Nmin=1, Nmax = 1000;
bool isPerfect (const int &);

int main(int argc, const char * argv[]) {
    cout << "i numeri pefetti da "<< Nmin << " a "<< Nmax << " sono: "<<endl;
    for (int i=Nmin; i<= Nmax; i++){
        if( isPerfect (i)== true)
            cout << "   " << i << endl;
    }
    return 0;
}


bool isPerfect (const int & n){
    bool r = false;
    int s=0;
    for (int i=1; i<= (n/2) ; i++){
        if( n%i == 0)
            s += i;
    }
    if (s==n)
        r = true;
    return r;
}
