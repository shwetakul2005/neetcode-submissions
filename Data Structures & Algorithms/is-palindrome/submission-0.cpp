#include<string>
class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.length();
        string temp = "";

        // convert to lower-case
        transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return tolower(c); });

        for(int i=0; i<l; i++){
            if((s[i] >= 48 && s[i]<=57) || (s[i] >= 97 && s[i]<=122)) {
                temp += s[i];
            }
        }
        int m = temp.size();
        for(int i=0; i<m; i++){
            if(temp[i] == temp[m-i-1]) continue;
            return 0;
        }
        return 1;
    }
};
