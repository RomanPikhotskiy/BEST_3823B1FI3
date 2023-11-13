int num_invers(int num){
    int new_num = 0 ;
    while(num > 0) {
        new_num *= 10;
        new_num += num % 10;
        num /= 10;
    }
    return new_num;
}