long long calc_row(int n, long long k){
    long long num = 0 ;
    for (int i = 1; i <= n; i ++)
        num += i * k;
    if ( num >= 0 && k < 0 )
    return 0 ;
    
    
    return num;
    
}