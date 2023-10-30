//500. Keyboard Row.cpp
class Solution {
public:
    bool findChar (string s, char ch){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ch){
                return true;
            }
        }

        return false;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string>result;  
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";

        for(int i = 0; i < words.size(); i++){
            int count1 = 0, count2 = 0, count3 = 0;
            for(int j = 0; j < words[i].size(); j++){
                char ch = words[i][j];
                if(ch >= 'A' && ch <= 'Z'){
                   ch = ch + 32;
                }
                if (findChar(s1,ch)){
                    count1++;
                }
                if (findChar(s2,ch)){
                    count2++;
                }
                if (findChar(s3,ch)){
                    count3++;
                }
            }

            if(count1 == words[i].size() || count2 == words[i].size() || count3 == words[i].size()){
                result.push_back(words[i]);
            }
        } 
        return result;
    }
};
