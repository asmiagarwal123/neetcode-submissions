class Solution {
public:
    bool isAnagram(string s, string t) {
        map < int ,int > mpp1 ;
        map < int ,int > mpp2 ; 
         if (s.size() != t.size()) {
            return false;
        }
 

        for ( int i =0 ; i < s.size();i++ ){
mpp1[s[i] - 'a']++;
        }
          for ( int i =0 ; i < t.size();i++ ){
            mpp2[t[i]-'a']++;
        }

       for(int i = 0; i < 26; i++) {
    if(mpp1[i] != mpp2[i]) {
        return false;
    }
}

return true;


        
    }
};
