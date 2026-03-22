class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i+=2){
            sum1+=nums[i];
        }
        for(int i=1;i<nums.size();i+=2){
            sum2+=nums[i];
        }
        return sum1-sum2;
    }
};