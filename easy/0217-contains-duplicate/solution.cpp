class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> map;
        for (int i =0; i< nums.size(); i++){
            if ( map.count(nums [i]) ) 
            map[nums[i]] ++ ;
            else {
                map.insert({nums[i], 1});
            }
        }

        for (auto& [key, val] : map){
            if (val >= 2) return true;
        }
        return false;
    }
};