class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // find pivot ele
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<=end){
            mid = st + (end - st)/2;
            if(nums[mid] == target) return mid;

            else if(nums[mid] > nums[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        int pivot = mid;

        if(target <= nums[n-1]){
            st = mid;
            end = n-1;
        }
        else if(target > nums[n-1]){
            end = mid-1;
            st = 0;
        }
        while(st<=end){
            int mid_2 = st+ (end-st)/2;

            if(nums[mid_2] == target) return mid_2;
            else if(nums[mid_2] > target){
                end = mid_2-1;
            }
            else{
                st = mid_2+1;
            }
        }

        return -1;

    }
};
