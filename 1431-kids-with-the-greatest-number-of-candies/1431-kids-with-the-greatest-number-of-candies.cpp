class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max=candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max) max=candies[i];
        }
    
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max)
            result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};
