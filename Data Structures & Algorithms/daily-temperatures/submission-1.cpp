class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<pair<int,int>> st;

        int i = n-1;
        vector<int> res(n);

        while(i>=0) {
            if(st.empty() || temp[i] < st.top().first){
                if(st.empty()) {
                    res[i] = 0;
                }
                else{
                    res[i] = st.top().second - i;
                }
                st.push({temp[i], i});
                i--;
            }

            else if(temp[i] >= st.top().first){
                st.pop();
            }
        }

        return res;
    }
};
