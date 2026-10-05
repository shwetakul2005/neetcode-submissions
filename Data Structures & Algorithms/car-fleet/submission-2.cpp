class Solution {
public:
    int carFleet(int tar,vector<int>& pos,vector<int>& sp) {
        int n = pos.size();

        unordered_map<int,int> index;
        stack<float> timeStack;
        for(int i =0; i<n; i++){
            index[pos[i]] = i;
        }

        sort(pos.begin(), pos.end());
        int fleet = 0;

        for(int i=n-1; i>=0; i--){
            float time = (tar - pos[i]) / static_cast<float>(sp[index[pos[i]]]);

            if(timeStack.empty()) {
                timeStack.push(time);
                fleet++;
            }

            else if(time > timeStack.top()){
                timeStack.pop();
                timeStack.push(time);
                fleet++;
            }
            // else{

            // }

        }

        return fleet;
        
    }
};
