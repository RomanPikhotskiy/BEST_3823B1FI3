int get_time(long long angle) {
    int t = (angle / 6);
    int h = t / 36000 ;
    int m = t / 60;
    int s = t % 60;
    t = h * 10000 + m * 100 + s;
    return t ;
    return 0; // Not implementation
}