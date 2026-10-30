class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector <string> > map;
        for (int i = 0; i< strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            string sorted = s;
                map[sorted].push_back(strs[i]);
            
        }
            vector <vector<string>> result;
        for (auto& [key, val]: map){
            result.push_back(val);
        }
        return result;
    }
};