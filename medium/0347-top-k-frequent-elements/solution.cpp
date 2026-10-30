class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); i++){
            if (map.count(nums[i])) {
                map [nums[i]]++;
            }
            else {
                map.insert({nums[i], 1});
            }
        }

        priority_queue <pair<int,int>> pq;
        for (auto& [key, val] : map){
            pq.push({val, key});
        }

        vector <int> result;
      for (int i =0; i < k; i++) {
        result.push_back(pq.top().second);
            pq.pop();
      }   
        return result;
    }
};