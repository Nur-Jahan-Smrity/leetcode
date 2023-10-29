//350. Intersection of Two Arrays II.cpp
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int>pp;
        int n=nums1.size();
        int nn=nums2.size();
        int i,j;

        for( i=0 ; i<n    ; i++    )
        {   
            for(j=0;j<nn;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    pp.push_back(nums1[i]);
                    nums1[i]=-1;
                    nums2[j]=-1;
                    break;
                }

            }
            //cout<<nums1[i]<<" "<<nums2[i]<<endl;
            // if(nums1.size()>=nums2.size())
            // {
            //     //4 5 9
            //     //4 4 8 9 9
            //     if(nums1[i]==nums2[j])
            //     {
            //         pp.push_back(nums1[i]);
            //         j++;
            //         i++;
            //     }
               
            //     else
            //     {
            //         i++;
            //     }
            // }
            // else
            // {
            //     //4 5 9
            //     //4 4 8 9 9
            //     if(nums2[j]==nums1[i])
            //     {
            //         pp.push_back(nums1[i]);
            //         j++;
            //         i++;
            //     }
               
            //     else
            //     {
            //         j++;
            //     }
            // }
              
        }
        return pp;
    }
};
