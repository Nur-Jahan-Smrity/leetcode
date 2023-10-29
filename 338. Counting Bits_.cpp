//338. Counting Bits_.cpp
class Solution {
public:
    int bitCount (int n){
        int count = 0;
        while(n > 0){
            count += n % 2;
            n/= 2;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i <= n; i++){
            res.push_back(bitCount(i));
        }
        return res;
    }
};
