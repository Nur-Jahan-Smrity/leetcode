//506. Relative Ranks.cpp
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        priority_queue<int>pq;
        map<int,string>mp;
        for(int i = 0; i < score.size(); i++)
        {
            pq.push((score[i]));
        }
        int count = 1;
        while(pq.size() > 0)
        {
            mp[pq.top()] = to_string(count);
            count++;
            pq.pop();
        }
        vector<string> v;
        for(auto m : score)
        {
            if(mp[m] == "1")
            {
                v.push_back("Gold Medal");
            }
            else if(mp[m] == "2")
            {
                v.push_back("Silver Medal");
            }
            else if(mp[m] == "3")
            {
                v.push_back("Bronze Medal");
            }
            else
            {
                v.push_back(mp[m]);
            }
        }
        return v;
    }
};
