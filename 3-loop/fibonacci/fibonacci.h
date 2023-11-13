long fib(int m){
    if ( m < 0 ){
        return -1 ;
    }
    long long f = 0, s = 1, n = 1, summ = 0;
    while(1 == 1 ){
        if ( s <= m)
            summ += s ;
        else 
            break;
        f = s ;
        s = n ;
        n = f + s ;
    }
    return summ ;
}