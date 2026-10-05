class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n = nums.size();
        int l = 0; 
        int h = n-1;

        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid] == t){
                return mid;
            }
            else if(nums[mid]<t){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }

        return -1;
    }
};
