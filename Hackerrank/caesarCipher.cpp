string caesarCipher(string s, int k) {
    string encoded;
    char letter;
    for (int i; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <='Z') {
            letter = 'A' + (s[i] - 'A' + k) % 26;
            encoded.push_back(letter);
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            letter = 'a' + (s[i] - 'a' + k) % 26;
            encoded.push_back(letter);
        }
        else {
            encoded.push_back(s.at(i));
        }
    }
    
    return encoded;
}