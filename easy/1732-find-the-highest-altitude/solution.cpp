class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int sum =0;
      int maxL =0;
       for (int i =0; i<gain.size(); i++){
        sum+= gain[i];
        maxL = max(maxL,sum);
       } 
       return maxL;
    }
};