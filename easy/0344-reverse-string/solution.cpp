class Solution {
public:
    void reverseString(vector<char>& s) {
        int j =0 ; int i =s.size()-1;
        char temp;
         while (j < s.size()/2 ){
            temp = s[j] ;
            s[j] = s[i];
            s[i] = temp;
            j++;
            i--;
            
        }
       
    }
};