class Solution {
public:
  int NthRoot(int N, int M) {
        if(M==0){
            return 0;
        }
        if(N==1){
            return M;
        }
       int low = 0;
       int high = M;
       int count = 0;
       long long num = 1;

       while(low<=high){
        int mid = low + (high-low)/2;
        
        for(int i=0;i<N;i++){
            num *= mid;
            if(num>M){
                break;
            }
        }
        if(num==M){
            return mid;
        }
        else if(num<M){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
        count = 0;
        num = 1;
       }
       return -1;
    }
};
