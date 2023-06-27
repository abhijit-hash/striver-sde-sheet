class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        //build a maxheap
        priority_queue<pair<int,int>>pq;
        //make a pair first is frequency of the element and second is element
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        //storing (element,frequency) in maxheap
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
