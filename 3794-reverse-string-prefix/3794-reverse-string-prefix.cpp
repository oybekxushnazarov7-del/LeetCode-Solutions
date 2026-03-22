class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans;
        for(int j=k-1;j>=0;j--){
            ans.push_back(s[j]);
        }
        for(int z=k;z<s.size();z++){
            ans.push_back(s[z]);
        }
        return ans;
    }
};