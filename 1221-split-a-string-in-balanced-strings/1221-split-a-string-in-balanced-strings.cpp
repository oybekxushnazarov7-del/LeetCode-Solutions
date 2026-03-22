class Solution {
public:
    int balancedStringSplit(string s) {
        int balans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R') balans++;
            else if(s[i]=='L') balans--;
            if(balans==0) count++;
        }
        return count;
    }
};