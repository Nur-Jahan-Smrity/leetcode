//345. Reverse Vowels of a String.cpp
class Solution {
public:
    bool isVowel(char ch)
    {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
      }

      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return true;
      }

      return false;
    }


    string reverseVowels(string s)
    {
      string vowelString = "";
      for(int i = 0; i < s.size(); i++){
        if(isVowel(s[i])){
          vowelString += s[i];
        }
    }

    reverse(vowelString.begin(),vowelString.end());
    int j = 0;
    
    
    for(int i = 0; i < s.size(); i++)
    {
        if(isVowel(s[i]))
        {
          s[i] = vowelString[j];
          j++;
        }
    }
      return s;
    }
};
