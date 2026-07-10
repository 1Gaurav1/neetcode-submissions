class Solution {
public:
    int distance(int x, int y){
        return x * x + y * y;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,int>> pq;

        for(int i = 0; i < n ; i++){
            int dist = distance(points[i][0],points[i][1]);
            if(pq.size() < k){
                pq.push({dist,i});
            }
            else if(dist < pq.top().first){
                pq.pop();
                pq.push({dist,i});
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;
    }
};