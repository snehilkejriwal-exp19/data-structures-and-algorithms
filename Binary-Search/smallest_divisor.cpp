class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        long long sum = 0;
        int answer = high;

        while(low<=high){
            int mid = low + (high-low)/2;

            for(int i = 0;i<nums.size();i++){
                sum += (nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                answer = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            sum = 0;
        }
        return answer;
    }
};