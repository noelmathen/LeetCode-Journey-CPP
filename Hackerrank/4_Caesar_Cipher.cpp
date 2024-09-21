string caesarCipher(string s, int k) {
    int n = s.size();
    k = k%26;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                s[i] = 'a' + (s[i] - 'a' + k)%26;
            }
            else{
                s[i] = 'A' + (s[i] - 'A' + k)%26;
            }
        }
    }
    return s;
}