class Solution {
public:
    int maxArea(vector<int>& height) {
        int low =0;
        int high = height.size()-1;
        int maxArea = 0;
        int currArea= 0;

        while (low < high){
            currArea = std::min(height[low], height[high]) * (high - low);
            maxArea = std::max(currArea, maxArea);
            if (height[low] < height[high]){
                low++;
        } else {
                high--;
            }
        }
        return maxArea;
    }
};