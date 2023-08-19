class Solution {
public:
    static bool comp(string a,string b){
        string aa = a+b;
        string bb = b+a;
        return aa>bb;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back(to_string(nums[i]));
        }
        sort(temp.begin(),temp.end(),comp);
        string ans;
        if(temp[0]=="0")
            return "0";
        for(int i=0;i<temp.size();i++)
            ans += temp[i];
        return ans;
    }
};