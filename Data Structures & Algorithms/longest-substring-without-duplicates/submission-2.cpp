class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,pair<int,int>> freq;
        int st=0;
        int c=0;
        int max_ans=0;
        while(st<=c && c<n) {
           if(freq[s[c]].first == 0) {
            freq[s[c]].first++;
            freq[s[c]].second = c;
            max_ans = max(c-st+1,max_ans);
           }
           
           else{
            if(freq[s[c]].second < st){
                freq[s[c]].second = c;
                max_ans = max(c-st+1,max_ans);
            }
            else{
            st = freq[s[c]].second+1;
            freq[s[c]].second = c;

            }
           }

           c++;


        }
        return max_ans;
    }
};
