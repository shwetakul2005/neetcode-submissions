class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        unordered_map<char,int> freq;

        for(int i =0; i<n ;i++) {
            freq[s1[i]]++;
        }

        
        unordered_map<char,int> temp;
        for(int i=0; i<n; i++){
            temp[s2[i]]++;
        }

        for(int i=0; i<=m-n ;i++){
            if(temp == freq) return 1;
            else{
                temp[s2[i]] -- ;
                if(temp[s2[i]] == 0) temp.erase(s2[i]);
                temp[s2[i+n]]++;
            }
        }

        // if(temp['d'] == 0) return 1;

        return 0;

    }
};
