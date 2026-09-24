class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            if(nums[i]<10){
                if(nums[i]==i){
                    return i;
                }
            }
            else{
                while(nums[i]>0){
                    sum += nums[i]%10;
                    nums[i] /= 10;
                }
                if(sum==i){
                    return i;
                }
                sum = 0;
            }
        }
        return -1;
    }
};