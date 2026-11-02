class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int j = n-1;
        vector<int> result(n, 0);

        for (int i =0; i< nums.size(); i++){
            nums[i] = nums[i] * nums[i];
            cout << nums[i];
        }
         while ( j != i){
            if (nums[i] < nums[j]){
                result[n-1] = nums[j];
                j--;
                n--;
            } else  {
                  result[n-1] = nums[i];
                i++;
                n--;
         }
         
         }
         if (i == j){   
            result[n-1] = nums[i];
         }
         return result;
    }
};