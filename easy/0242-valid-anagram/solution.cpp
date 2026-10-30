class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return 0;
        int l = s.size();
        unordered_map <char, int> map;

        for (int i = 0; i<l; i++){
            if (map.count(s[i])) {
                map[s[i]]++;
            }else {
            map.insert({s[i], 1});
            }
        }

        int j =0;
        while (map.count (t[j]) ){
            map[t[j]] --;
            j++;
        }

        for (auto& [key, val] : map) {
            if (val != 0) return false;
        }
        return true;
        
    }
};