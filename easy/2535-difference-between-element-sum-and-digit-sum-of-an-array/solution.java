class Solution {
    public int differenceOfSum(int[] nums) {
        int digits =0;
        int elements =0;
        for (int i =0; i<nums.length; i++){
            elements += nums[i];
            
                int x = nums[i];
                while (x > 0){
                   int last = x % 10;
                    digits += last;
                    x = x/10;
                   
                
            } 
        }
        
        return elements - digits;
    }
}