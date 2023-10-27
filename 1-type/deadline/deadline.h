int get_score(short score, int start, int stop, int now) {
    float scr = score;
    float str = start;
    float stp = stop;
    float nw = now ;
    if (now <= start){
        return score ;
    }
    if (now >= stop + start){
        return score / 2 ;
    }
    float a = (scr/2) / (stp - str);
    
    while(nw != str){
        scr -= a;
        nw -= 1 ;
    }
    int answer = scr;
    if ( scr - answer > 0 ) answer += 1 ;
    return answer ;

    return 0; // Not implementation
}
