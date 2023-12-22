#include <math.h>

void transform(double* array, int size, int* commands, int commands_count) {
    for (int i = 0; i < commands_count; i++) {
        if (commands[i] == 1) {
            for (int j = 0; j < size; j++) {
                array[j]++;
            }
        } else if (commands[i] == 2) {
            for (int j = 0; j < size; j++) {
                array[j] = sqrt(fabs(array[j]));
            }
        } else if (commands[i] == 3) {
            double mean = 0;
            for (int j = 0; j < size; j++) {
                mean += fabs(array[j]);
            }
            mean /= size;
            for (int j = 0; j < size; j++) {
                array[j] = pow(fabs(array[j]), mean);
            }
        } else if (commands[i] == 4) {
            for (int j = 0; j < size; j++) {
                if ((int)array[j] % 2 == 0) {
                    array[j] = -array[j];
                } else {
                    array[j] = pow(fabs(array[j]), -1);
                }
            }
        } else if (commands[i] == 5) {
            for (int j = 0; j < size; j++) {
                if ((int)array[j] % 2 == 0 && j % 2 == 0) {
                    array[j] = 0;
                }
            }
        } else if (commands[i] == 6) {
            int pl = 0;
            for ( int j = 0 ; j < size; j ++){
                if(*array <= 0)
                pl -= 1;
                else{
                    pl += 1;
                }
                
                array ++ ;
            }
            pl /= 2;
            
            array -= (size);
            for ( int j = 0 ; j < size; j ++){
                if(pl > 0 && *array > 0){
                    *array = -*array;
                    pl -= 1;
                }
                if(pl < 0 && *array < 0){
                    *array = -*array;
                    pl ++ ;
                }
                if (pl < 0 && *array == 0 ){
                    *array += 1;
                }
                array ++ ;
            }
        }
    }
}
