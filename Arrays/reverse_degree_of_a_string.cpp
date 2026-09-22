class Solution {
public:
    int reverseDegree(string s) {
        int reversed = 0;
        int n = s.length();
        int z = 122;
        for(int i = 0;i<n;i++){
            int product = (123 - s[i])*(i+1);
            reversed += product;
        }
        return reversed;
    }
};