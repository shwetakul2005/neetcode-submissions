class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        
        map<int,int> store;

        for(int i=0; i<k; i++){
            store[nums[i]]++;
        }

        int st=0;
        int curr = k-1;
        vector<int> output;

        while(st<=curr && curr<n){
            output.push_back(store.rbegin()->first);
            if(curr == n-1)return output;
            store[nums[st]]--;
            if(store[nums[st]] == 0) store.erase(nums[st]);
            store[nums[curr+1]]++;
            st++;
            curr++;
        }
        return output;
    }
};
