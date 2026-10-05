class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int hrs) {
        int n = piles.size();
        int max = INT_MIN;
        for(int i=0; i<n ;i++){
            if(max<piles[i]){
                max = piles[i];
            }
        }

        int st=1;
        int end = max;
        int min_rate=max;
        while(st<=end) {
            int mid = end + (st-end)/2;
            int c_hrs = 0;

            for(int i=0; i<n; i++){
                c_hrs += piles[i] / mid;
                if(piles[i] % mid != 0){
                    c_hrs += 1;
                }
            }

            if(c_hrs > hrs) {
                st = mid + 1;
            }
            else if(c_hrs <= hrs) {
                min_rate = mid;
                end = mid-1;
            }
            
        }
        return min_rate;
    }
};
