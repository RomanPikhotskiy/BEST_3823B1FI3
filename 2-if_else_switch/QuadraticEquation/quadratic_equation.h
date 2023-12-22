#include <math.h>

int QuadraticEquation(double a, double b, double c){
    float D = pow(4, 2) - 4 * a * c ;
    if ( D == 0){
        return (-b / 2 * a);
    }
    if ( D > 0 ){
        return ((-b + sqrt(D))/ 2 + (-b - sqrt(D))/2);
    }
    D = -D;
    return ((-b + sqrt(D))/ 2 + (-b - sqrt(D))/2);
}