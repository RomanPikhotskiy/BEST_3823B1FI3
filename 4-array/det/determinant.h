#include <math.h>

int determinant(int matrix[], int size){
    int a = sqrt(size);
    int b = 1 ;
    int opr = 0 ;

    if (a * a != size){
        return -404;
    }

    if ( size == 3){
    for (int i = 0 ; i < a ; i ++ ){
        b = 1 ;
        for (int j = 0 ; j < a ; j ++ )
            b *= matrix[((i + j) % a) + j * a];
        opr += b ;
    }
    for (int i = a - 1 ; i >= 0 ; i -- ){
        b = 1 ;
        for (int j = 0 ; j < a ; j ++ )
            {
            int h = fabs(i - j);
            if ( i - j < 0)
            h = a + (i - j);
            b *= matrix[(h % a) + j * a];
            }
        opr -= b ;
    }
    return opr;
    }

    if(size == 4) 
    return matrix[0]*matrix[3] - matrix[1]*matrix[2];
    int pop ;
    for (int i = 0 ; i < a ; i ++ )
    {
        int new_mat[a - 1];
        for(int j = a ; j < size ; j ++ ){
            if ( j % a != i)
            new_mat[j - a] = matrix[j];
        }
    pop += pow(-1, 1 + i) * matrix[i] * determinant(new_mat, a - 1);
    }
    return pop;
    return 0;
}