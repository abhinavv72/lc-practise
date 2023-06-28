class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        unordered_map<int, vector<pair<int,int>>>graph;
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0], v= edges[i][1], edgeIdx =i;
            graph[u].push_back({v,edgeIdx});
            graph[v].push_back({u,edgeIdx});
        }
        vector<double> probabilities(n,0.0);
        probabilities[start] =1.0;
        
        priority_queue<pair<double,int>> nodesToExplore;
        nodesToExplore.push({1.0, start});
        
        while(!nodesToExplore.empty()){
            auto [prob,u]=nodesToExplore.top();
            nodesToExplore.pop();
            
            if(u==end)
                return prob;
            if(probabilities[u]>prob)
                continue;
            for(auto[v,edgeIdx] :graph[u]) {
                double newProb = prob*succProb[edgeIdx];
                
                if(newProb > probabilities[v]){
                    probabilities[v]= newProb;
                    nodesToExplore.push({newProb,v});
                }
            }
        }
        return 0.0;
        
    }
};