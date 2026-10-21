class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        int k = 0;
        for(int i=0;i<n;i++){
            while(nums[i]!=0){
                int digit = nums[i]%10;
                sum += digit;
                nums[i] = nums[i]/10;
            }
            nums[k++] = sum;
            sum = 0;
        }
        return *min_element(nums.begin(),nums.end());
    }
};