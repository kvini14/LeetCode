//https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        int flag=0;
        for (int i=0;i<size;i++){
            if (target==nums[i])
               return i;
        }
        for (int i=0;i<size;i++){
            if(target<nums[i]){
                return i;
                flag=1;
                break;
            }
            
        }
        if(flag==0)
             return nums.size();
        return 0;
    }
};
