char left_more(double input[], unsigned int size){
    int c = 0 ;
    for ( int i = 1 ; i < size; i ++ ){
        if ( input[i] > input[i - 1])
        c += 1 ;
    }
    return c;
}