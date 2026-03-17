class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        std::unordered_map<char,int> map;
        for(int i=0; i<s.length(); i++) {
            auto it = map.find(s[i]);
            if(it != map.end()) {
                it->second ++;
            } else {
                map[s[i]]= 1;
            }
        }
        for(int i=0; i<t.length(); i++) {
            auto it = map.find(t[i]);
            if(it != map.end()) {
                it->second --;
            }
        }
        for(auto it : map) {
            if(it.second != 0) return false;
        }
        return true;
    }
};
