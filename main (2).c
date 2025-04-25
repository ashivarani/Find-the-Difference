char findTheDifference(char* s, char* t) {
    char result = 0;
    while (*t) {
        result^=*t;
        *t++;
    }
     while (*s) {
        result^=*s;
        *s++;
    }
 return result;
}