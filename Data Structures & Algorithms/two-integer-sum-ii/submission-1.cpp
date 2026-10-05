class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        unordered_map<int,pair<int,int>> freq;

        for(int i=1; i<=n; i++) {
            freq[numbers[i-1]].first++;
            freq[numbers[i-1]].second = i;
        }
        vector<int> ans;
        for(int i=1 ;i<=n; i++){
            int rem = target - numbers[i-1];
            if(freq[rem].first > 0) {
                ans.push_back(i);
                ans.push_back(freq[rem].second);
                break;
            }
        }

        return ans;
    }
};
