class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> map;
        int n = nums.size();
        int maj = 0;
        for (int i = 0; i < n; i++){
            int element = nums[i];
            if (map.count(element)){
                map[element]++;
            } else {
                map.insert({element, 1});
            }
        }

        for (auto& [key, val]: map){
           cout << key; cout << val;
           if (val > (n/2)){
            maj = key;
           }
        }
        return maj;
    }
};