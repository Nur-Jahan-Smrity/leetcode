//67. Add Binary.cpp
/*
       a=    101
       b=     11
      -------------
     a+b=   1000
     
     1+1 = 10 put 0 carry 1
     1+0+1 = 10 put 0 carry 1
     1+1 = 10 put 0 carry 1
     1 = 1 put 1 carry 0
*/
/*
a= 1010
b=1011

carry= 0
length of a in i= 3
length of b in j= 3



carry if length of a in i is >=0 = 0
carry if length of b in i is >=0 = 1
ans after carry % 2 + '0' =  1
carry/=2  = 0

carry if length of a in i is >=0 = 1
carry if length of b in i is >=0 = 2
ans after carry % 2 + '0' =  10
carry/=2  = 1

carry if length of a in i is >=0 = 1
carry if length of b in i is >=0 = 1
ans after carry % 2 + '0' =  101
carry/=2  = 0

carry if length of a in i is >=0 = 1
carry if length of b in i is >=0 = 2
ans after carry % 2 + '0' =  1010
carry/=2  = 1
ans after carry % 2 + '0' =  10101
carry/=2  = 0



reversing the string  = 10101

*/
class Solution {
 public:
  string addBinary(string a, string b) {
    string ans;
    int carry = 0;
   // cout<<"carry= "<<carry<<endl;
    int i = a.length() - 1;
    int j = b.length() - 1;
    // cout<<"length of a in i= "<<i<<endl;
      //cout<<"length of b in j= "<<j<<endl;
    while (i >= 0 || j >= 0 || carry) 
    {
      if (i >= 0)
      {
            carry += a[i--] - '0';
            //cout<<"carry if length of a in i is >=0 = "<<carry<<endl;
      }
        
      if (j >= 0)
      {
                 carry += b[j--] - '0';
                // cout<<"carry if length of b in i is >=0 = "<<carry<<endl;
      }
        
      ans += carry % 2 + '0';
     // cout<<"ans after carry % 2 + '0' =  "<<ans<<endl;
      carry /= 2;
     // cout<<"carry/=2  = "<<carry<<endl;
    }

    reverse(begin(ans), end(ans));
     //cout<<"reversing the string  = "<<ans<<endl;
    return ans;
  }
};
