//1447. Simplified Fractions
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>ans;
        set<double>st;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                double fraction=double(i)/j;
                if(st.find(fraction)==st.end())
                {
                    ans.push_back(to_string(i)+"/"+to_string(j));
                    st.insert(fraction);
                }
            }
        }
        return ans;
    }
};
