int chess_rook(char a, int b, char c, int d){
    char end = 'H';
    int a_ascii = a, end_acsii = end, c_ascii = c ;
    if (a_ascii > end_acsii || c_ascii > end_acsii || (a == c && d == b) || b > 8 || d > 8){
        return 0;
    }
    if(a == c || b == d){
        return 1 ;
    }
    return 0 ;
}