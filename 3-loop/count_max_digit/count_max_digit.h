#include <math.h>

char count_max_digit(long long a){
    if ( a < 0 )
    a = -a ;
    char maxim = 1 ;
    int c = 0 ;
    long long b = a ;
    while(b > 0){
        if ( b % 10 > maxim)
        maxim = b % 10 ;
        b /= 10;
    }
    while(a > 0){
        if ( a % 10 == maxim){
            c += 1;
        }
        a /= 10;
    }
    return c ;
}