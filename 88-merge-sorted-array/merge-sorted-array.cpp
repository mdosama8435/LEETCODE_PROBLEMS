class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c(m+n,0);
        int p1=0,p2=0,p3=0;
        while(p1<m && p2<n){
            if(nums1[p1]<nums2[p2]){
                c[p3]=nums1[p1];
                p3++,p1++;
            }
            else{
                c[p3]=nums2[p2];
                p3++,p2++;
            }
        }
        while(p1<m){
            c[p3]=nums1[p1];
            p3++,p1++;
        }
        
        while(p2<n){
            c[p3]=nums2[p2];
            p3++,p2++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=c[i];
        }
    }
};