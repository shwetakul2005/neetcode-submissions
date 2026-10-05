class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int num_r = matrix.size();
        int num_c = matrix[0].size();

        // find row
        int st = 0;
        int end = num_r-1;

        while(st<=end){
            int mid = end+(st-end)/2;

            if(matrix[mid][0] == target){
                return 1;
            }

            if(matrix[mid][0] < target){
                st = mid+1;
            }
            else if(matrix[mid][0] > target){
                end = mid-1;
            }
        }
        int row = 0;
        if(st == 0) row = st;
        else row = st-1;

        int st_r = 0;
        int end_r = num_c-1;

        while(st_r<=end_r){
            int mid = end_r + (st_r - end_r)/2;

            if(matrix[row][mid] == target){
                return 1;
            }

            if(matrix[row][mid] < target){
                st_r = mid+1;
            }
            else if(matrix[row][mid] > target){
                end_r = mid-1;
            }
        }

        return 0;

    }
};
