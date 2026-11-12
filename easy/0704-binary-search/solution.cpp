class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while (l<=r){
          int i = l+ (r-l) /2;
            int n = nums[i];
            if (target > n)
                l = i +1;
            else if (target < n)
                r = i-1;
            else 
                return i;

                
        }
        return -1;
    }
};