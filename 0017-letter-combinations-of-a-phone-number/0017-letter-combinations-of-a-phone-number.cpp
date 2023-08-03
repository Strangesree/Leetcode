class Solution {
public:

    void helper(string digits,vector<string>& ans,string &temp,vector<string> &pad,int ind){
        if(ind == digits.size()){
            ans.push_back(temp);
            return;
        }
        string value = pad[digits[ind]-'0'];
        for(int i=0;i<value.size();i++){
            temp.push_back(value[i]);
            helper(digits,ans,temp,pad,ind+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        vector<string> pad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string temp;
        helper(digits,ans,temp,pad,0);
        return ans;
    }
};