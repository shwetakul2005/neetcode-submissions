class Solution {
public:
    // we need max ht + max wd
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int st = 0; int end = n-1;
        int h1 = heights[st];
        int h2 = heights[end];

        int max_wader = 0;
        while(st<end) {
            int curr_wader = 0;
            int ht = min(heights[st], heights[end]);
            int wd = end - st;
            curr_wader = ht*wd;
            max_wader = max(max_wader ,curr_wader);
            if(heights[st] < heights[end]){
                st++;
            }
            else{
                end--;
            }

        }
        return max_wader;
    }
};
