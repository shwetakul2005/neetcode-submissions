class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st <= end){
            mid = st + (end-st)/2;

            if(nums[mid] == nums[end]){
                return nums[mid];
            }

            else if(nums[mid] < nums[end]){
                end = mid;
            }
            else if(nums[mid] > nums[end]){
                st = mid + 1;
            }
        }

        return -1;
    }
};
