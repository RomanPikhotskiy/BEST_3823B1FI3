#include <math.h>

int determinant(int matrix[], int size){
    int a = sqrt(size);
    int b = 1 ;
    int opr = 0 ;

    if (a * a != size){
        return -404;
    }

    if ( size == 9){
    return matrix[0] * matrix[4] * matrix[8] + matrix[1] * matrix[5] * matrix[6] + matrix[2] * matrix[3] * matrix[7] - matrix[2] * matrix[4] * matrix[6] - matrix[1] * matrix[3] * matrix[8] - matrix[0] * matrix[5] * matrix[7];
    }
    

    if (size == 4){
        return matrix[0]*matrix[3] - matrix[1]*matrix[2];
    }

    int k = 0 ;
    for (int i = 1 ; i < a ; i ++ ){
        for (int j = 0 ; j < a ; j ++ ){
            if ( j % a != 0 ){
                k += 1;
            }
        }
    }
    int nm[k];
    int c = 0 ;
    int n = 1 ;
    int answer = 0 ;
    for (int i = 1 ; i < a ; i ++ ){
        for (int j = 0 ; j < a ; j ++ ){
            if ( j % a != 0 ){
                nm[c] = matrix[i * a + j] ;
                
                c += 1 ;
            }
        }
    }
    
    c = 0 ;
    answer += matrix[0] * determinant(nm, sizeof(nm)/sizeof(int));
    for (int d = 1 ; d < a ; d ++ ){
        c = 0 ;
        for (int i = 1 ; i < a ; i ++ ){
            for (int j = 0 ; j < a ; j ++ ){
                if ( j % (i * a) != d ){
                    nm[c] = matrix[i * a + j] ;
                    
                    c += 1 ;
                }
            }
        }
        int jj = -1;
        for (int l = 1; l <= d + 1 ; l++ )
        jj *= -1 ;

        n += 1 ;
        
        answer += matrix[d] * determinant(nm, sizeof(nm)/sizeof(int)) * jj;
    }
    return answer;
}