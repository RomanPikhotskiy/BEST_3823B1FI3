#include <math.h>

char find_digit(double number, char digit){
    int l = 0 ;
    while(1 == 1){
        if( ceil(number) == number){
            break;
        }
        l = 1 ;
        number *= 10 ;
    }
    long long num = number ;
    long long g = 0 ;
    while(num > 0){
        g *= 10 ;
        g += num % 10 ;
        num /= 10 ;
    }
    int c = 1;
    while(g > 0){
        if ( g % 10 == digit){
            return c + l ;
        }
        c += 1;
        g /= 10 ;
    }
    return -1 ;
}