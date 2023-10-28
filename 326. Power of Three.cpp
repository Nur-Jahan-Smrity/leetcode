//326. Power of Three.cpp
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
           return 0;
        if(n==1)
           return 1;
        return n%3==0 && isPowerOfThree(n/3);
        /*
        log formula =>
        log(a)b=log(a)/log(b);
        this is the formula but while doing it with this we have to consider some cases like n=0 ...we have to consider those based on problem statement but the formula is ok ...

        but its better to implement manually ..doing it with formula will not improve your skill ...
        */
       
    }
};
