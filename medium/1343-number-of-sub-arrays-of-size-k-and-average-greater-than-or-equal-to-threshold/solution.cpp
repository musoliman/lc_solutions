class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left =0; 
        int window_sum = 0;
        int count = 0;

        for (int right =0; right <arr.size(); right++){
            window_sum += arr[right];
            if (right - left + 1 == k){
                if ( (window_sum/k) >= threshold ){
                    count++;
                }
                window_sum -= arr[left];
                    left++;
            }
        }
        return count;
    }
};