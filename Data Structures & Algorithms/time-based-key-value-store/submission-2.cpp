class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>> store;
    // unordered_map<string,int> last_timestmp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({value,timestamp});
        // last_timestmp[key] = timestamp;
    }
    
    string get(string key, int timestamp) {

        int st = 0;
        int end = store[key].size()-1;
        int temp_ind = -1;
        int temp = 0;

        while(st<=end){
            int mid = st + (end - st)/2;

            if(store[key][mid].second == timestamp){
                return store[key][mid].first;
            }

            else if(store[key][mid].second < timestamp){
                temp = max(store[key][mid].second,temp);
                if(temp == store[key][mid].second) {
                    temp_ind = mid;
                }
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        if(temp_ind != -1) return store[key][temp_ind].first;

        return "";
    }
};
