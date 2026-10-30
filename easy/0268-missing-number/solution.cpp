class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map <int, int> map;
        int n = nums.size();
        int x;
        for (int i =0; i< n; i++ ){
        int ele = nums[i];
        if (map.count(ele)){
            map[ele]++;
        } else {
            map.insert({ele, 1});
        }
        }
        for (int i =0; i <= n; i++){
            if (!(map.count(i))){
                x = i;
            }
        }

        
        return x;
    }
};