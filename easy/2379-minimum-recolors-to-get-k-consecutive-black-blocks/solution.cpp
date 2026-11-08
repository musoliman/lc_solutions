class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int wc = 0;
        int minx = k;
        for (int right = 0; right < blocks.size(); right++){
            if (blocks[right] == 'W'){
              wc++;
            }
            if (right-left+1 == k){
                minx = min (minx, wc);
                if (blocks[left] == 'W'){
                    wc--;
                    
                }
                 left++;
            }
        }
        return minx;
    }
};