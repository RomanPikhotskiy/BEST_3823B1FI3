#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int min = matrix[length + 1], answer = 101 ;
    for (int i = 1 ; i < (length - 1); i ++ ){
        for (int j = 1 ; j < (width - 1); j ++ ){
            
            if ( matrix[i * width + j] < matrix[(i - 1) * width + j] && matrix[i * width + j] < matrix[(i - 1) * width + j - 1] && matrix[i * width + j] < matrix[(i - 1) * width + j + 1] && matrix[i * width + j] < matrix[i * width + j - 1] && matrix[i * width + j] < matrix[i * width + j + 1] && matrix[i * width + j] < matrix[(i + 1) * width + j] && matrix[i * width + j] < matrix[(i + 1) * width + j - 1] && matrix[i * width + j] < matrix[(i + 1) * width + j + 1]  ){
                
                if(min > matrix[i * width + j]){
                min = matrix[i * width + j];
                answer = i * 100 + j;
                }
            }
        }
    }
    return answer;
}