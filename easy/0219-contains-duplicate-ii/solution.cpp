class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left = 0;
        bool result = false;
        unordered_set <int> set;
        for (int right = 0; right < nums.size(); right++){
            if (set.count(nums[right])){
                result = true;
            }
            
             set.insert(nums[right]);

            if (right - left +1 > k){
                set.erase(nums[left]);
                left++;
            }
        }
        return result;
    }
};