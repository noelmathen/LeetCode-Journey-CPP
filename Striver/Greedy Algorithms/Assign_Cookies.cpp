//MY WRONG SOLUTION
// class Solution{    
//     public:
//     int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
//         int count=0;
//         for(int i=0; i<Student.size(); i++){
//             int localMin=INT_MAX;
//             for(int j=0; j<Cookie.size(); j++){
//                 if(Cookie[j] >= Student[i])
//                     localMin = min(localMin, Cookie[j]);
//             }
//             if(localMin != INT_MAX){
//                 Cookie.erase(Cookie.begin()+2);
//                 count++;
//             }
//         }
//         return count;
//     }
// };


//OPTIMAL SOLUTION
class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
        int l=0, r=0, m=Student.size(), n=Cookie.size();
        sort(Student.begin(), Student.end());
        sort(Cookie.begin(), Cookie.end());
        while(l<m && r<n){
            if(Cookie[r] >= Student[l])
                l++;
            r++;
        }
        return l;
    }
};