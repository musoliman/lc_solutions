class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window_sum = 0;
        double max_result = 0;

        for (int i = 0; i < k; i++){
            window_sum += nums[i];
        }
        max_result = window_sum;
    
        for (int i = k; i< nums.size(); i++){
            window_sum += nums[i] - nums [i-k];
            max_result = max(max_result, window_sum);
            
        }
        return max_result / k ;
    }
};