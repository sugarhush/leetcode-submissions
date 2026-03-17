class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int min_time = 0;
        for (int i=0; i<points.size()-1; i++) {
            for (int j=0; j<points[i].size()-1; j++) {
                min_time += std::max(abs(points[i+1][j] - points[i][j]) , abs(points[i+1][j+1] - points[i][j+1]) );
            }
        }
        return min_time;
    }
};
