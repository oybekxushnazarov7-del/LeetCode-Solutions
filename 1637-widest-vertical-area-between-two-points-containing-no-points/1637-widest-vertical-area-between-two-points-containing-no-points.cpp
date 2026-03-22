class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>result;
        for(int i=0;i<points.size();i++){
            result.push_back(points[i][0]);
        }
        sort(result.begin(),result.end());
        int max=0;
        for(int i=0;i<result.size()-1;i++){
            if(result[i+1]-result[i]>max) max=result[i+1]-result[i];
        }
        return max;
    }
};