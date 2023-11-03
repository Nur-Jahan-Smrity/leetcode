//520. Detect Capital

class Solution {
public:
    bool detectCapitalUse(string word) {
        int s=0,p=0;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
               s++;
            else
              p++;
        }
        if(s==word.size())
        {
            return true;
        }
        if(p==word.size())
        {
            return true;
        }
        if(s==1 && p==word.size()-1 && isupper(word[0]) )
        {
            return true;
        }
        else
         return false ;
    }
};
