//
//  b2es13bis.cpp
//  b2es13bis
//
//  Created by Roberto Ceola on 08/02/2021.
//

#include "b2es13bis.hpp"

int * ord (int * arr,const int & n){
    int b=0;
    for (int i= 0; i<n; i++){
        for(int j=0; j< (n-1-i); j++){
            if (arr[i]>arr[j+i+1]){
                b = arr[i];
                arr[i] = arr[j+i+1];
                arr[j+i+1] = b;
            }
        }
    }
    return arr;
}
