class Solution {
public:
    int mySqrt(int n) {
        int low = 0;
        int high = n;
        if(n==0 || n==1){
            return n;
        }
        while(low<=high){
            int mid = low + (high-low)/2;

            if(mid == n/mid){
                return mid;
            }
            else if(mid<n/mid){
                low = mid +1;
            }
            else{
                high = mid - 1;
            }
        }
        return high;
    }
};