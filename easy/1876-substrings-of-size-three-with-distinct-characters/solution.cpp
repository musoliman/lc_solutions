class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0; 
        int j =1;
         int k = 2;
         int count =0;

         for (k; k< s.size(); k++){
            if (s[i] != s[j] && s[j] != s[k] && s[i] != s[k] )  {
            count++;
            }
           
                i++;
                j++;
            
            
         }
         return count;
    }
};