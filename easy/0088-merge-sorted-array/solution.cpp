class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m+n;
        
        while ( n > 0 ) {
            if ( m == 0 || nums2[n-1] > nums1[m-1]){
               nums1[l-1] = nums2[n-1];
                n--;
                l--;
                
            } else {
                nums1[l-1] = nums1[m-1];
                m--;
                l--;
                
            }

            }
            
           
       
    }
};