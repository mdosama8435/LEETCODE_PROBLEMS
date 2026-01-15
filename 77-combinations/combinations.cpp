class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;
    
void backtracking(int start, int n , int k){
    if(current.size()==k){
        result.push_back(current);
    }

    //Try all posibilty
    for(int i=start ;i<=n;i++){
        current.push_back(i);// choose
        backtracking(i+1,n,k); //explore
        current.pop_back(); // backtrack

    }


}


    vector<vector<int>> combine(int n, int k) {
        backtracking(1,n,k);
        return result;
        
    }
};