class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long low=0, high=skill.size()-1, totSkill=skill[low]+skill[high], chemistry=0;
        while(low<high){
            if(totSkill != skill[low]+skill[high])
                return -1;
            chemistry += skill[low++]*skill[high--];
        }
        return chemistry;
    }
};
