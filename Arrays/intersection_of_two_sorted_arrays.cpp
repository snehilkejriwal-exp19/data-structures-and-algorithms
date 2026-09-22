class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> result;
        int p1 = 0;
        int p2 = 0;
        

        while(p1<n1 && p2<n2){
            if(nums1[p1]==nums2[p2]){
                result.push_back(nums1[p1]);
                p1++;
                p2++;
            }
            else if(nums1[p1]<nums2[p2]){
                p1++;
            }
            else if(nums1[p1]>nums2[p2]){
                p2++;
            }
        }
        return result;
    }
    
};