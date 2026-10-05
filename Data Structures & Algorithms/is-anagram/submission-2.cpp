class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int>f(26,0);

        for(char c:s){
            f[c - 'a']++;
        }
        for(char c:t){
            f[c - 'a']--;
        }

        for(int a:f){
            if(a!=0){
                return false;
            }
        }
        return true;
    }
};
