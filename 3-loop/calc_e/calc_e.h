#include <math.h>

unsigned long long calc_e(char order){
    double e = 0;
    int c = 0;
    if(order == 1){
        while(e < 2.7){
            e = pow((1.0 + 1.0 / (double)c), (double)c);
            c++;
        }
    }
    if(order == 2){
        while(e < 2.71){
            e = pow((1.0 + 1.0 / (double)c), (double)c);
            c ++;
        }
    }
    if(order == 3){
        while(e < 2.718){
            e = pow((1.0 + 1.0 / (double)c), (double)c);
            c++;
        }
    }
    if(order == 4){
        while(e < 2.7182){
            e = pow((1.0 + 1.0 / (double)c), (double)c);
            c++;
        }
    }
    if(order == 5){
        while(e < 2.71828){
            e = pow((1.0 + 1.0 / (double)c), (double)c);
            c++;
        }
    }
    return c;
}