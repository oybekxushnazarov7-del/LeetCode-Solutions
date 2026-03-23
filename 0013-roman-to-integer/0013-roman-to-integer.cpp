class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
        };
    int sum=0;
    for(int i=0;i<s.size();i++){
        int hozirgi = roman[s[i]];
        int keyingi = roman[s[i + 1]];
        if(i+1<s.size() && hozirgi<keyingi)
        sum-=hozirgi;
        else sum+=hozirgi;
    }
    return sum;
    }
};