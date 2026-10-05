#include<string>
class Solution {
public:

    string encode(vector<string>& strs) {
        int num_of_str = strs.size();

        string encoded;
        for(int i=0; i<num_of_str; i++) {
           
            encoded += to_string(strs[i].size());
            encoded += "#";
            encoded += strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int n = s.length();
        vector<string> decoded;
        int st=0;
        string new_string;
        int st_len = 0;
        while(st<n){    
            string leng_string;
            while(s[st] != '#'){
                leng_string+=s[st];
                st=st+1;
            }
            st_len = stoi(leng_string);
            st = st+1;
            new_string = s.substr(st,st_len);
            decoded.push_back(new_string);
            st = st + st_len;

        }

        return decoded;

    }
};
