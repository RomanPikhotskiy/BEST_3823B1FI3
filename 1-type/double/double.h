bool compare_double(double x, double y) {
    int a = x * 1000000;
    int b = y * 1000000;
    if (a == b)
    return true; // Not implementation
    return false ;
}

int get_nearest_int(double x) {
    int a = x ;
    if ( a - x > 0.5 || x - a > 0.5){
        return a + 1;
    }
    return a;
    return 0; // Not implementation
}

double get_fractional(double x) {
    if (x < 0 ){
        x = -x;
        int b = x;
        x = b + 1 - x ;
    }
    int a = x ;
    x *= 100000;
    x -= a * 100000;
    x /= 100000;
    return x;
    return 0.1; // Not implementation
}
