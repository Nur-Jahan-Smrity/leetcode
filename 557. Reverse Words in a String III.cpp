557. Reverse Words in a String III.cpp
class Solution {
public:
    string reverseWords(string s) 
    {
        istringstream ss(s);
        string temp="",ans="";

    while(ss>>temp)
    {
        reverse(temp.begin(),temp.end());
        ans+=temp+' ';
    }
    ans.pop_back();
    return ans;
    }
};
