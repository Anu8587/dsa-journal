// valid anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
     
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countS[t[i]]--;
        }
        for (auto i:countS){
            if(i.second != 0) return false;
            
        }
        return true;
    };
   
};