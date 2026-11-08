class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0; int right = 0; int zeroes = 0;
        for  (right; right < nums.size(); right++){
          
          if (nums[right] == 0){
           
            zeroes +=1;
          }
          if (zeroes > k){
           
           if (nums[left] == 0) zeroes--;
            left++;
          }
        }
        return (right-left);
    }
};