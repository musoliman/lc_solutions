class Solution {
    public int arraySign(int[] nums) {
        float product =1;
        for (int i =0; i < nums.length; i++){
            if (nums[i] < 0){ nums[i] =-1; }
            product *= nums[i];
        }

        if (product >0) return 1;
        else if(product<0) return -1;
      

        return 0;
    }
}