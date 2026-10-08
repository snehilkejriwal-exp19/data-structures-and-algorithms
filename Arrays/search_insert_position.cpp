<<<<<<< HEAD
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int p = 1;
        int index = -1;
        for(int i =0;i<n;i++){
            if(nums[i]==target){
                index = i;
            }
        }
        if(target<nums[0]){
            index = 0;
        }
        if(target>nums[n-1]){
            index = n;
        }
        while(p<n){
            if(nums[p-1]<target && nums[p]>target){
                index = p;
                break;
            }
            p++;
        }
        
        return index;
    }
=======
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int p = 1;
        int index = -1;
        for(int i =0;i<n;i++){
            if(nums[i]==target){
                index = i;
            }
        }
        if(target<nums[0]){
            index = 0;
        }
        if(target>nums[n-1]){
            index = n;
        }
        while(p<n){
            if(nums[p-1]<target && nums[p]>target){
                index = p;
                break;
            }
            p++;
        }
        
        return index;
    }
>>>>>>> bc5d7d3 (New folder)
};