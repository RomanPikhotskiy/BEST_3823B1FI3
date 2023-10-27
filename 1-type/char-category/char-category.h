#include <stdbool.h>


bool is_digit(char x) {
    int a_x = x;
    int f = '0';
    int t = '9';
    if ( a_x >= f && a_x <= t)
        return true; // No implementation
    return false;
}

bool is_letter(char x) {
    int a_x = x;
    int f = 'A';
    int t = 'Z';
    if ( a_x >= f && a_x <= t)
        return true; // No implementation
    f = 'a';
    t = 'z';
    if ( a_x >= f && a_x <= t)
        return true; // No implementation
    return false;
}

bool is_punctuation(char x) {
    int a_x = x;
    int f = '!';
    int t = '/';
    if ( a_x >= f && a_x <= t)
        return true; // No implementation
    f = ':';
    t = '@';
    if ( a_x >= f && a_x <= t)
        return true;
    f = '[';
    t = '`';
    if ( a_x >= f && a_x <= t)
        return true;
    f = '{';
    t = '~';
    if ( a_x >= f && a_x <= t)
        return true;
    return false ;
}

int get_ascii_code(char first, char second, char third) {
    char ch[11];
    int f = first;
    int s = second;
    int t = third;
    int result = f * 1000000 + s * 1000 + t;
    return result; // No implementation
}

