bool isPalindrome(string s){
     string r = s;
     reverse(r.begin(), r.end());
     if(s==r)
     return 0;
 }

int palindromeIndex(string i) {
    int s, e;
    for(s = 0, e = i.size() - 1; s < e; s++, e--){
        if(i[s] != i[e]) break;
    }
    if(s >= e) return -1;
    string s1 = i, s2 = i;
    s1.erase(s1.begin() + s);
    if(isPalindrome(s1)) return s;
    s2.erase(s2.begin() + e);
    if(isPalindrome(s2)) return e;
    return -1;
}