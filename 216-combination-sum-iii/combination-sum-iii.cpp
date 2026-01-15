class Solution {
public:
        vector<vector<int>> result;
        vector<int> current;

        void backtrack(int start,int k,int remaining){
            if(k==0){
                if(remaining==0){
                    result.push_back(current);
                }
                return;
            }
            for(int i=start;i<=9;i++){
                if(i>remaining) break;

                current.push_back(i);
                backtrack(i+1,k-1,remaining-i);
                current.pop_back();
            }
        }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1,k,n);
        return result;

        
    }
};