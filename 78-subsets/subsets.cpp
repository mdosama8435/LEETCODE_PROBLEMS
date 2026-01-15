class Solution {
public:

vector<vector<int>> result;
vector<int> current;

void backtrack(vector<int>& nums,int index){

    //ase condition
    if(index==nums.size()){
        result.push_back(current);
        return;
    }

    //choices-Take it
    current.push_back(nums[index]);
    backtrack(nums,index+1);
         
        current.pop_back();//backtracking

    //Leave it
    backtrack(nums,index+1);

}

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return result;
        
    }
};