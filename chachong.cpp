# algorithm-study
/*
保证在数组大小范围内的查重
*/
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i=0;
         while(i<nums.size()){
             if(nums[i]==i){
                 i++;
                 continue;
             }
             if(nums[i]==nums[nums[i]]){
                 return nums[i];
             }
             swap(nums[i],nums[nums[i]]);
         }
         return -1;
    }
};

