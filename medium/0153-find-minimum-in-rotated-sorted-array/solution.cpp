class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0; int r = nums.size()-1;
       
        while (l <r ){
            int i = l +(r-l)/2;
            int mid = nums[i];
            if (mid > nums[r] ){
                l = i+1;
            }
            else if (mid <= nums[r]){
                r = i;
                
            }
           
        }
        return nums[ l +(r-l)/2];
    }
};