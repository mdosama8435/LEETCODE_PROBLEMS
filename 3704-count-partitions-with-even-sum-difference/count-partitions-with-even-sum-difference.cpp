class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0 ; i<n-1 ; i++){
             int lsum = 0;
             int rsum = 0;

             for(int j=0 ; j<=i; j++){
                lsum += nums[j];
             }
             for(int j=i+1 ; j<=n-1 ; j++){
                rsum += nums[j];
             }
             int diff = lsum - rsum;
             if(diff % 2 == 0){
                count++;
             }
        }
        return count;
    }
};