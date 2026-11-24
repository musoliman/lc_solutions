class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        int result = 0;
        int count = 0;
        map[0]=1;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] % 2 != 0) count++;
            if (map.count(count-k)){
                result+= map[count-k];
            } 
            map[count]++;
        }
        return result;
    }
};