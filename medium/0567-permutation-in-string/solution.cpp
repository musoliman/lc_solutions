class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        bool result = false;
        unordered_map <int, int> map1;
        unordered_map <int, int> map2;

        for (int i = 0; i<s1.size(); i++){
            if (map1.count(s1[i])){
                map1[s1[i]]++;
            } else {
            map1.insert({s1[i],1}); 
            }
        }

        for (int right  = 0; right< s2.size(); right++){    

           if (map2.count(s2[right])){
                map2[s2[right]]++;

            } else {

            map2.insert({s2[right],1}); 
            }

           

          if (right - left + 1 > s1.size()) {
    map2[s2[left]]--;                         
    if (map2[s2[left]] == 0) map2.erase(s2[left]);  
    left++;                                    
}    if (map1 == map2){
                result = true;
            } 

        }
        return result;
    }
};