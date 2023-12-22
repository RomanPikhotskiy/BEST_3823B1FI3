#include <math.h>

int calcsize(void* memory, int number){
    int size ;
    int c = 0 ;
    if ( number == 1){
        int* a = memory;
        size = sizeof(int);
        while(1){
        if (*a == 11){
            a += 1;
            if(*a == 47)
            break;
            c += 1;
        }
        a += 1 ;
        c += 1;
    }
    }
    if ( number == 2){
        char* a = memory;
        size = sizeof(char);
        while(1){
        if (*a == 11){
            a += 1;
            if(*a == 47)
            break;
            c += 1;
        }
        a += 1 ;
        c += 1;
    }
    }
    if ( number == 3){
        short* a = memory;
        size = sizeof(short);
        while(1){
        if (*a == 11){
            a += 1;
            if(*a == 47)
            break;
            c += 1;
        }
        a += 1 ;
        c += 1;
    }
    }
    if ( number == 4){
        long long* a = memory;
        size = sizeof(long long);
        while(1){
        if (*a == 11){
            a += 1;
            if(*a == 47)
            break;
            c += 1;
        }
        a += 1 ;
        c += 1;
    }
    }
    if ( number == 5){
        unsigned long long* a = memory;
        size = sizeof(unsigned long long);
        while(1){
        if (*a == 11){
            a += 1;
            if(*a == 47)
            break;
            c += 1;
        }
        a += 1 ;
        c += 1;
    }
    }
    if ( number == 6){
        unsigned short* a = memory;
        size = sizeof(unsigned short);
        while(1){
        if (*a == 11){
            a += 1;
            if(*a == 47)
            break;
            c += 1;
        }
        a += 1 ;
        c += 1;
    }
    }
    
    
    
    
    return (c + 2) * size ;
}
