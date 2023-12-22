#include <math.h>

double kramer_method(int* matrix, int* vector, int size){
    double summ = 0 ;
    double ns = 0 ;
    int a = *matrix;
    matrix ++ ;
    int b = *matrix;
    matrix ++ ;
    int c = *matrix;
    if(size == 3 ){
        ns = -1;
        for (int i = 0 ; i < 10 ; i ++ ){
            for (int j = 0 ; j < 10 ; j ++ ){
                for (int k = 0 ; k < 10 ; k ++ )
                {
                    if (a * i + b * j + c * k == *vector ){
                        ns += sqrt(i) + sqrt(j) + sqrt(k); 
                    }
                }
            }
        }
        if (ns == -1 ){
            return -1 ;
        }
        summ += ns ;
        matrix ++ ;
        vector ++ ;
    }
    return summ ;
}
