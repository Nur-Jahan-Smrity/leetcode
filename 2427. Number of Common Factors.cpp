//2427. Number of Common Factors
class Solution {
public:
    int commonFactors(int a, int b) {
        int gcd=__gcd(a,b), cnt=0;
        for(int i=1;i<=sqrt(gcd);i++)
        {
            if(gcd%i==0)
            {
                cnt++;
                if((gcd/i)!=i)
                {
                    cnt++;
                }

            }
        }
        return cnt;
    }
};
