class Solution {
public:
    int val(char x){
        if(x=='I')
            return 1;
        else if(x=='V')
            return 5;
        else if(x=='X')
            return 10;
        else if(x=='L')
            return 50;
        else if(x=='C')
            return 100;
        else if(x=='D')
            return 500;
        else if(x=='M')
            return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int num=0;
        for(int i=0; i<s.size(); i++){
            if( (s[i]=='I' || s[i]=='X' || s[i]=='C') && (val(s[i])<val(s[i+1])) ){
                num += (val(s[i+1])-val(s[i]));
                i++;
            }
            else{
                num += val(s[i]);
            }
        }
        return num;
    }
};
