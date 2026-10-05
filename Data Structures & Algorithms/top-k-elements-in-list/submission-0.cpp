class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i=0; i<n; i++){
            freq[nums[i]] ++;
        }

       vector<pair<int, int>> vec(freq.begin(), freq.end());

    // 2. Sort the vector by the 'second' element (the value) using a lambda
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // Use > for descending order
    });

        vector<int> res;
        for(int i = 0; i<k; i++){
            res.push_back(vec[i].first);
        }

        return res;
    }
};
