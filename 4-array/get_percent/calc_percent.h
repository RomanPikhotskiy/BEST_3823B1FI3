#include <math.h>

int calc_percent(int matrix[], int size){
    int maxim = matrix[0], minim = matrix[0];
    for ( int i = 1 ; i < size ; i ++ ){
        if(maxim < matrix[i])
        maxim = matrix[i];
        if(minim > matrix[i])
        minim = matrix[i];
    }
    int r = (maxim - minim) / 2, c = 0, k = 0  ;
    for ( int i = 0 ; i < size ; i ++ ){
        if ( matrix[i] > r)
        c += 1;
    }
    float c_f = c;
    int answer = (c_f / size) * 100;
    return answer ;
}