#include <math.h>

char find_bin_pattern(int number){
    int num_two = 0 , a = 1;
    while (number != 0 ){
        num_two += (number % 2) * a;
        number /= 2 ; 
        a *= 10;
    }
    a /= 100;
    int k = 1, count = 0, x = num_two ;
    while(x > 0){
        x = num_two % k / a ;
        k *= 10;
        if(x == 101)
        count += 1;
        a /= 10;
    }
    return count ;

}