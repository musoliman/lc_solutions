class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        map[0] =1;
        int sum =0; int result = 0;
        
        for (int i =0; i<nums.size(); i++){
            sum+= nums[i];
            int rem = ((sum %k) +k) %k;
            if (map.count(rem)){
            result+= map[rem];
            map[rem]++;
            }
            else {
                map[rem] =1;
            }
        }
        return result;
    }
};