//344. Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int p=s.size(),z=s.size()-1;
        char a;
        for(int i=0;i<p/2;i++)
        {
             a=s[i];
             s[i]=s[z];
             s[z]=a;
             z--;

        }
    }
};
