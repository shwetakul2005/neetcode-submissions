class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> res;

        for(int i =0 ;i<n; i++){
            int curr = nums[i];
            int rem = target - curr;
            for(int j=i+1; j<n; j++){
                if(nums[j] == rem){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }

        return res;
    }
};
