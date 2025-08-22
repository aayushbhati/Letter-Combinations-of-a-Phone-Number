class Solution {
public:
void solve(string digits,vector<string>&ans,string s,string map[],int i){
    if(i>=digits.size()){
        ans.push_back(s);
        return;
    }
    int number=digits[i]-'0';
    string val=map[number];
    for(int j=0;j<val.size();j++){
        s.push_back(val[j]);
        solve(digits,ans,s,map,i+1);
        s.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0)return ans;
        string s="";
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int i=0;
        solve(digits,ans,s,map,i);
        return ans;
    }
};
