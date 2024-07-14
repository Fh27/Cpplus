class Solution {
public:
class mycomp{
    public:
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        int dist1=a.first*a.first+a.second*a.second;
        int dist2=b.first*b.first+b.second*b.second;
        return dist1>dist2;
    }
};
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomp>pq;
        for(auto p:points){
            pq.push({p[0],p[1]});
        }
        while(!pq.empty() && k--){
            auto&p=pq.top();
            ans.push_back({p.first,p.second});
            pq.pop();
        }

        return ans;
    }
};
