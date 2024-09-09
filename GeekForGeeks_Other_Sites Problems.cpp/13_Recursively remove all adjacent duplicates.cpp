// The stupid solution I coded my self(apparently this is the only solution i think)
class Solution {
  public:
    string rremove(string s) {
        int x=0;
        while(x<=s.size()){
            int j=0, n=s.size();
            for(int i=0; i<=n-1; i++){
                while(i<=n-1 && i>=0 && (s[i]==s[i+1] || s[i] == s[i-1]))
                    i++;
                if(i<=n-1)
                    s[j++] = s[i];
            }
            if(j==n)
                return s;
            while(j<n){
                s.pop_back();
                j++;
            }
            x++;
        }
        return s;
    }
};
