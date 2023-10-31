//461. Hamming Distance

//done in 2 process .both are accepted solution ....


/*class Solution {
public:
    vector<int> bitCount(int n){
 
        vector<int> ans;
        while(n > 0){
            ans.push_back(n %2);
            n/= 2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int hammingDistance(int x, int y) {
 
        vector<int> v1,v2;
        int count = 0;
        v1 = bitCount(x);
        v2 = bitCount(y);
        v1.insert(v1.begin(), 32 - v1.size(), 0);
        v2.insert(v2.begin(), 32 - v2.size(), 0);
        for(int i = 0; i < v1.size(); i++){
            if(v1[i] != v2[i]){
                count++;
            }
        }
 
        return count;
    }
};*/
class Solution {
public:
  
    int hammingDistance(int x, int y) {
 
         int count = 0;
        for(int i = 31; i >= 0; i--)
        {
            int a = ((x >> i) & 1);
            int b = ((y >> i) & 1);

            if(a != b){
                count++;
            }
        }
        return count;
    }
};
