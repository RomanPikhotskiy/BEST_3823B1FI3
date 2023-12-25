#include <math.h>
#include <string.h>
#include <stdlib.h>

char* convert(double number){
    int u = 0;
    if(number < 0){
        u = 1;
        number = -number;
    }
    int a = 10;
    int p = 1;
    while(p != 0 ){
        p = number / a ;
        a *= 10;
    }
    a /= 10;
    a /= 10;
    int k = number;
    int l = -1;
    while(1){
        l += 1;
        k = number;
        if(k % 10 == 9){
            k += 1.0;
        }

        if(k * 1.0 == number || l == 5){
            break;
        }
        number *= 10.0;
        
    }
    while(k % 10 == 0){
        k /= 10;
        l -= 1;
    }
    l = pow(10, l);
    char * str = (char *) malloc(256);
    while(k){
        
        int j = k % 10;

        k /= 10;
        char o = j + '0';
        char i[256];
        i[0] = o;
        strcat(str, i);
        l /= 10;
        if(l == 1){
            o = '.';
            i[0] = o;
            strcat(str, i);
        }
        
        
    }
    if(u == 1){
        str[strlen(str)] = '-';
    }
    for(int i = 0; i < strlen(str)/2; i ++){
        char r = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = str[i];
        str[i] = r;
    }
    if(str[strlen(str) - 1] == '0'){
        str[strlen(str) - 1] = ' ';
    }
    return str;
}
