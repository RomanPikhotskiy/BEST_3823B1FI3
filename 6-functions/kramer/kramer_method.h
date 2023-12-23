#include <math.h>

double kramer_method(int* matrix, int* vector, int size){
    float vec[size];
    if(size == 3 ){
        for(int i = 0 ; i < size; i ++){
            vec[i] = vector[i];
        }
        float c = 0 , k = 0, g1 = 1, g2 = 1 ;
        c = matrix[3];
        k = matrix[6];
        matrix[4] -= matrix[1] * c;
        matrix[5] -= matrix[2] * c;
        matrix[7] -= matrix[1] * k;
        matrix[8] -= matrix[2] * k;
        vec[1] -= vec[0] * c;
        vec[2] -= vec[0] * k;
        
        if(matrix[4] * matrix[5] * matrix[8] * matrix[7] == 0){
            return -1;
        }
        
        for(int i = 0 ; i < 3; i ++ ){
            
        }
        
        if(matrix[4] != 0){
            float s = 1.0 / matrix[4];
            
            matrix[4] = 1;
            matrix[5] *= s;
            vec[1] *= s;
            
            c = 0 ;
            k = 0 ;
            g1 = 1 ;
            g2 = 1 ;
            c = matrix[1];
            k = matrix[7];
            matrix[2] -= matrix[5] * c;
            matrix[8] -= matrix[5] * k;
            vec[0] -= vec[1] * c;
            vec[2] -= vec[1] * k;
        }
        for(int i = 0 ; i < 3; i ++ ){
            
        }
        
        if(matrix[8] != 0){
            int p = 8;
            float s = 1.0 / matrix[p];
            
            matrix[p] = 1;
            vec[2] *= s;
            c = 0 ;
            k = 0 ;
            g1 = 1;
            g2 = 1;
            
            c = matrix[5];
            k = matrix[2];
    
            vec[1] -= vec[2] * c;
            vec[0] -= vec[2] * k;
        
        }
    }
    return (sqrt(vec[0]) + sqrt(vec[1]) + sqrt(vec[2]));
}
