//202. Happy Number
class Solution 
{
public:
    bool isHappy(int n)
    {
        long long p=n,store=0;

        while(1)
        {
            store=0;
            while(p>0)
            {
                store+=(p%10)*(p%10);
                p=p/10;
                   
            }
            if(store==1)
            {
               return true;
            }
            if(store<5 && store!=1)
               return false;
            
            p=store;

        }
        
        return store==1; 
    }
};
