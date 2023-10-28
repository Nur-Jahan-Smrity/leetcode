//228. Summary Ranges.cpp

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string>result;
       
       string temp = "";
       int count = 0, startingPoint = 0, flag = 0;
       for(int i = 0; i < nums.size(); i++){
           startingPoint = i;
           flag = 0;
          while(startingPoint + 1 < nums.size() && nums[startingPoint + 1] == nums[startingPoint] + 1) {
             startingPoint++;
             flag = 1;
           
          }
          if(flag){
            temp += to_string(nums[i]);
            temp += "->" + to_string(nums[startingPoint]);
            
          }
          else{
            temp += to_string(nums[i]);
          } 
          result.push_back(temp);
          i = startingPoint;
          temp.clear();
         
       }
       return result;   
    }
};
