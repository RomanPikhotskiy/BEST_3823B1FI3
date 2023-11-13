#include <math.h>

unsigned long long calc_e(char order){
    unsigned long long e = 2.71828;
    int a = pow(10, order);
    e *= a ;
    int e_n = e ;
    e = e_n / a ;
    return e;
}