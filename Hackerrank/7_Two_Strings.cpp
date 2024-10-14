string twoStrings(string s1, string s2) {
    set<char> sett;
    for(auto x : s1)
        sett.insert(x);
    for(auto x : s2){
        if(sett.find(x) != sett.end())
            return "YES";
    }
    return "NO";
}