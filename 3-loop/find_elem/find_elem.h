#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0; //Счётчик итераций
    int a = number - left;
    int num_now = (right - left) / 2 + left;
    i += 1;
    while(num_now != number){
        if ( num_now < number )
        {
            left = num_now + 1 ;
        }
        else
        {
            right = num_now - 1 ;
        }
        num_now = (right - left) / 2 + left;
        i += 1;
    }

    i *= a ; 
    return i; //НЕ МЕНЯТЬ!
}