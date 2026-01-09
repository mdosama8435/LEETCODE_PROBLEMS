class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> result;

        vector<string> map = {
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        string current;
        backtrack(digits,0,map,current,result);
        return result; 

    }
    void backtrack(string &digits,int index,vector<string> &map,string &current,vector<string> &result){

        if(index==digits.size()){
            result.push_back(current);
            return ;
        }

        int digit=digits[index]-'0';
        string &letters = map[digit];

        for(char c : letters){
            current.push_back(c);
            backtrack(digits,index+1,map,current,result);
            current.pop_back();
        }
    }


};