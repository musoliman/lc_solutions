class Solution {
    public int subtractProductAndSum(int n) {
       String x = Integer.toString(n);
       int product = 1;
       int sum =0;
       for (int i =0 ; i< x.length(); i++){
        int z = n%10;
        n =n/10;
        product *= z;
        sum += z;

       }
         return product - sum;
    }
  
}