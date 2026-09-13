class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        int n = nums.size();
        for (int i=0;i<n;i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        nums[0] = positive[0];
        for(int k=0;k<n/2;k++){
            nums[2*k] = positive[k];
            nums[(2*k) + 1] = negative[k];
        }
        return nums;   
    }
    
};
