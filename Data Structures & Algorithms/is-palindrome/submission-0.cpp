class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
    s[i] = tolower(s[i]);
}

int i =0 ; 
int j = s.length()-1;
while (i < j) {
    if (!isalnum(s[i])) { 
        i++;
    }
    else if (!isalnum(s[j])) {
        j--;
    }
    else if (tolower(s[i]) != tolower(s[j])) {
        return false;
    }
    else {
        i++;
        j--;
    }
}
return true;


        
    }
};
