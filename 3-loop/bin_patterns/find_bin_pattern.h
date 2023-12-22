#include <math.h>

char find_bin_pattern(int number){
    int a = number ;
    int c = 0 ;
    int new_num = 0;
    while(a > 0){
        if (a % 2 == 1){
            a /= 2 ;
            if ( a % 2 == 0 ){
                a /= 2 ;
                if ( a % 2 == 1){
                    c += 1;
                }
            }
        } 
        else{
            a /= 2;
        }
    }
    return c ;

}