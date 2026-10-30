class Solution {
    public String triangleType(int[] nums) {
        String triangle;
          
           
              if ((nums[0] + nums [1] > nums[2]) && (nums[1] + nums [2] > nums[0]) &&  (nums[0] + nums [2] > nums[1])) {

               if ((nums[0] == nums [1]) && (nums[1] == nums[2])) return "equilateral";
            if ((nums[0] == nums [1]) && (nums[1] != nums[2])) return "isosceles";
            if ((nums[0] != nums [1]) && (nums[1] == nums[2])) return "isosceles";
            if ((nums[0] == nums [2]) && (nums[1] != nums[2])) return "isosceles";
            if ((nums[0] != nums [1]) && (nums[1] != nums[2]) &&  (nums[0] != nums[2]) ) return "scalene";
              
              
              } else return "none";

     return "none";   
    }
}