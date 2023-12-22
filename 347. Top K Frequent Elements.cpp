//347. Top K Frequent Elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        
        priority_queue<pair<int,int>>p;
        vector<int>n;

        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
          p.push(make_pair(it.second,it.first));
        }
        while(k>0 && !p.empty())
        {
            n.push_back(p.top().second);
            p.pop();
            k--;
        }
        return n;
    }
};
