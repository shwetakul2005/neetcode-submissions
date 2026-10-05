class Solution {
public:
    int trap(vector<int>& ht) {
        int n = ht.size();
        if(n<=2) return 0;

        int left = 0;
        int right = n-1;
        int max_left = 0;
        int max_right = 0;
        int water = 0;

        while(left<right){
            if(ht[left] <= ht[right]) {
                if(ht[left] >= max_left){
                    max_left = ht[left];
                }
                else{
                    water += max_left - ht[left];
                }
                left ++;
            }
            else{
                if(ht[right] >= max_right){
                    max_right=ht[right];
                }
                else{
                    water += max_right - ht[right];
                }
                right--;
            }
        }
        return water;

    }
};
