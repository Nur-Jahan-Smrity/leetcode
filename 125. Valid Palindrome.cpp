//125. Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            //increament the value of l and r until it gets valid alphanumerical number ..
            while (l < r && !isAlphaNum(s[l])) {
                l++;
            }
            while (r > l && !isAlphaNum(s[r])) {
                r--;
            } 
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool isAlphaNum(char c) {
        return (isalpha(c) || isdigit(c));
    }
};
