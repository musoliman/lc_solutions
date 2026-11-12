class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        if (target > nums[r]) return r+1;
        while (l < r) {
            int i = l + (r-l)/2;
            int n = nums[i];
            if ( n >= target)
                r = i;
             else 
                l = i+1; 
        
        }
        return l;
    }
};