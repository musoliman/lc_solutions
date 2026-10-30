class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int cal =0;
        int n =nums.size();
        vector <vector <int>> result;
        sort(nums.begin(), nums.end());
        for (int x =0; x < n-2; x++)
        {
            if (x > 0 && nums[x] == nums[x-1]){
                continue;
            }
            int y = x+1;
            int z = n-1;
        while(y < z)
        {
            
            cal = nums[y] +nums[z];
            if ( (nums[x] + cal) == 0)
            {
                result.push_back({nums[x], nums[y], nums[z]});
                y++;
                z--;
            //     if ( y < n && nums[y] == nums  [y-1]) continue;
            //  if (z < n && ums[y] == nums  [y-1]) continue;
             while (y < z && nums[y] == nums  [y-1]) y++;
            while (y < z && nums[z] == nums  [z+1]) z--;
                
            
            }
            else if ((nums[x] + cal) < 0)
            {
                y++;
            }
            else 
            {
                z--;
            }
        } }
        return result;
    }
};