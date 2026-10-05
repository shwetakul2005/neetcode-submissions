class Solution {
public:
    bool isValid(string s) {
        int n =s.length();
        stack<char> st;

        for(int i =0 ;i<n; i++) {
            if(s[i] == '(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
            }
            if(st.empty()) return 0;
            if(s[i]==')'){
                
                if(st.top() == '(') {
                    st.pop();
                }
                else{
                    return 0;
                }
            }
            else if(s[i]==']'){
                if(st.top() == '[') {
                    st.pop();
                }
                else{
                    return 0;
                }
            }
            else if(s[i]=='}'){
                if(st.top() == '{') {
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
        if(st.empty()) return 1;
        return 0;
    }
};
