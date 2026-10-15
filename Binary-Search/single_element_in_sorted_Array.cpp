class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xorValue = 0;

        for(int value:nums){
            xorValue ^= value;
        }
        return xorValue;
    }
};