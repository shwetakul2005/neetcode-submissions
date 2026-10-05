class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> res;
        unordered_map<int, pair<int, vector<int>>> freq;
        

        for(int i=0; i<n; i++){
            freq[nums[i]].first++;
            freq[nums[i]].second.push_back(i);
        }

        for(int i =0; i<n ;i++){
            int curr = nums[i];
            freq[curr].first -- ;
            int rem = target - curr;
            if(freq[rem].first > 0){
                res.push_back(i);
                if(rem!=curr) res.push_back(freq[rem].second[0]);
                else res.push_back(freq[rem].second[1]);
                break;
            }
            freq[curr].first++;

        }
        return res;
    }
};
