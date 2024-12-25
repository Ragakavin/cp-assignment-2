void reverseString(char* s, int sSize) {
    int j = sSize-1;
    for(int i=0;i<j;i++){
        int swap = s[i];
        s[i] = s[j];
        s[j] = swap;
        j--;
    }
}