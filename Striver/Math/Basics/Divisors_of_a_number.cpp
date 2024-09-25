class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v1;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                v1.push_back(i);
                if(i!=n/i)
                    v1.push_back(n/i);
            }
        }
        sort(v1.begin(), v1.end());
        return v1;
    }
};