class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        int count = 0;
        int xorValue=target;

        for(int value:arr){
            xorValue ^= value;
            if(xorValue==0){
                ++count;
            }
            xorValue=target;
        }
        return count;
    }
};