
// 287. Find the Duplicate Number
#include<iostream>
#include<vector>


class Solution {
    public:
        int findDuplicate(vector<int>& nums) {

            // NAVIE APPROACH

            // sort(nums.begin(),nums.end());
            // for(int i=0;i<nums.size()-1;i++){
            //     if(nums[i]==nums[i+1]){
            //         return nums[i];
            //     }
            // }
            // return -1;
    
            //VISITED METHOD 

            // int ans=-1;
            // for(int i=0;i<nums.size();i++){
            //     int index = abs(nums[i]);
    
            //     //already visted
            //     if(nums[index]<0){
            //         ans=index;
            //         break;
            //     }
    
            //     //visited mark
            //     nums[index]*=-1;
            // }
            // return ans;
    
            //Poisitioning
            
            while(nums[0]!=nums[nums[0]]){
                swap(nums[0],nums[nums[0]]);
            }
            return nums[0];
        }
    };