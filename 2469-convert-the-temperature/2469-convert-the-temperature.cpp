class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans;
        return {celsius+273.15 , celsius*1.80+32.00};
    }
};