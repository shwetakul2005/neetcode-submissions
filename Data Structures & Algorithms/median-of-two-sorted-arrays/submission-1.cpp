class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int cnt = 0;
        int aq_cnt = ((n+m)/2) +1;

        int pt1 = 0;
        int pt2 = 0;
        double ul = 0;
        double pen_ul = ul;

        while(cnt<aq_cnt){
                if(pt1>n-1){
                    pen_ul = ul;
                    ul = nums2[pt2];
                    pt2++;
                    cnt++;
                    continue;
                }
                else if(pt2 > m-1){
                    pen_ul = ul;
                    ul = nums1[pt1];
                    pt1++;
                    cnt++;
                    continue;
                }

            
                else if(nums1[pt1] < nums2[pt2]){
                    pen_ul = ul;
                    ul = nums1[pt1];
                    pt1++;
                    // cnt++;
                }
                else{
                    pen_ul = ul;
                    ul = nums2[pt2];
                    pt2++;
                }
                cnt++;
            
        }

        if((n+m)%2 != 0){
            return ul;
        }
                
        return double (pen_ul + ul)/2.0;
                
    }
};
