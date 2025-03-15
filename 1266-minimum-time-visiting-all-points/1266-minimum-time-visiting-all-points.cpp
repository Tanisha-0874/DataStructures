class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i=0;i<points.size()-1;i++){
            int x1 = points[i][0];
            int y1 = points[i][1];
            int x2 = points[i+1][0];
            int y2 = points[i+1][1];
            ans += max(abs(y2 - y1), abs(x2 - x1));
            x1 = x2;
            y1 = y2;
        }
        return ans;
    }
};