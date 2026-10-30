class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector <int> result;
        int left = 0; int right = n-1;
        int cal;
        

        while (left < right){
         cal = numbers[left] + numbers[right];
            if ( cal == target){

            result.push_back(left+1);

            result.push_back(right+1);
            break;

        }else if ( cal < target){
            left++;
            
        }else 
            right--;
         
        }
   return result;
}
};