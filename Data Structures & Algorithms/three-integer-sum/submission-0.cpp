class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        //sort 
        sort(nums.begin(), nums.end());
        set<vector<int>> no_dup;

        // 2- pointer
        for(int i = 0 ; i<n; i++){
            int tar = 0-nums[i];

            int j = i+1;
            int k = n-1;
            vector<int> ans;
            while(j<k) {
                if(nums[j]+nums[k] == tar) {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    no_dup.insert(ans);
                    ans.clear();
                    j++;
                }
                else if(nums[j] + nums[k] <tar){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return vector<vector<int>>(no_dup.begin(), no_dup.end());
    }
};
