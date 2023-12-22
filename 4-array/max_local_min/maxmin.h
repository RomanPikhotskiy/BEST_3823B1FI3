int maxmin(int input[], int size){
    int max;
    if ( input[0] < input[1])
    max = input[0];
    else
    max = -100;
    int i ;
    for ( i = 1 ; i < size - 1; i ++){
        if ( input[i] < input[i - 1] && input[i] < input[i + 1]){
            if ( input[i] > max )
                max = input[i];
        }
    }
    if ( input[i] < input[i - 1] && input[i] > max){
        max = input[i];
    }
    return max ;

}