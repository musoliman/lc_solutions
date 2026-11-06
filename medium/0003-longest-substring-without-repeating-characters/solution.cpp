class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set <char> map;

        for (int right  =0; right < s.size(); right++){
            while (map.count(s[right])){
                map.erase(s[left]);
                left++;
            }
            map.insert({s[right]});
            maxLength = max(maxLength, right - left +1);

        }
        return maxLength;
    }
    
};