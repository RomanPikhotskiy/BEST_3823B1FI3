int reverse(int number) {
    int r_num = 0 ;
    while (number != 0){
        r_num *= 10;
        r_num += number % 10 ;
        number /= 10;
    }
    return r_num;
    return 0; // Not implementation
}

double decomposition(int number) {
    float sr = 0 , zn = 1;
    int c = 0 ;
    while(number != 0){
        sr += 1/((number % 10) * zn);
        zn *= 10;
        number /= 10;
        c += 1;
    }
    
    sr = c / sr ;
    return sr;

    return 0; // Not implementation
}

int append(int number, int start, int end) {
    int sr = 0, zn = 1, z = 1;
    int c = 0 ;
    if (start < 0 ) {start = -start ; z = -1;}
    while(number != 0){
        sr += (number % 10) * zn;
        zn *= 10;
        number /= 10;
    }
    sr += start * zn ;
    sr *= 10;
    sr += end ;
    sr *= z ;
    return sr; 
    return 0; // Not implementation
}
