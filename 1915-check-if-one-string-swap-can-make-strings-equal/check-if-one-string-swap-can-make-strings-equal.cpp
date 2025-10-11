class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int diff = 0;
        int count1[26] = {0}, count2[26] = {0};
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                diff++;
                count1[s1[i] - 'a']++;
                count2[s2[i] - 'a']++;
            }
            if(diff > 2){
                return false;
            }
        }
        for(int i = 0; i < 26; i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
    }
};