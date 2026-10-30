class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map <int, int> map;
       
        for (int i =0; i < nums.size(); i++){
             int ele = nums[i];
            if (map.count(ele)){
                map[ele]++;
            } else{
                map.insert({ele, 1});
            }
        }

        vector <int> arr;
       for (int i =1; i <= nums.size(); i++){
            if (!(map.count(i))) {
                arr.push_back(i);
        }


            }
         return arr;
    }
};