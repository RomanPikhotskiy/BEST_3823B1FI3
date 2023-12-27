#include <math.h>
#include <string.h>

void lower(char* str){
    int i = 0 ;
    while(str[i]){
        if ((int)str[i] >= (int)'A' && (int)str[i] <= (int)'Z'){
            str[i] += ' ';
        }
        i ++ ;
}
}
