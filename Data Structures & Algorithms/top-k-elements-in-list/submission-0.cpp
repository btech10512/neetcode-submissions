class Solution {
public:
    struct Compare {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }
};
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // priority queue and unordered map will be used 
        // unordered map for storing the frequency associated with the element 
        // and priority queue (maxHeap) for find top k elements required

        unordered_map<int,int>m;
        // m.insert({nums[0],1});
        // for(int i=1;i<nums.size();i++) {
        //     if(m.find(nums[i]) != m.end()) {
        //         m[nums[i]]++;
        //     }else {
        //         m.insert({nums[i],1});
        //     }
        // }
        for(int i:nums) {
            m[i]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>p;

        for(auto &it:m) {
            p.push(it);
        }
        vector<int>ans;
        while(k-- && !p.empty()) {
            ans.push_back(p.top().first);
            p.pop();
        }
        return ans;
    }
};
