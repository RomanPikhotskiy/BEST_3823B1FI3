long long change(int a, int b, int c, int d){
    long double summ = (c - a) + (d - b) * 0.01 ;
    if (summ < 0 )
        return -1;
    return summ * 100;

}