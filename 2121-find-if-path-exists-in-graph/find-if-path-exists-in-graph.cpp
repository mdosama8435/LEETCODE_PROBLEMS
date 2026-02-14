class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> g(n);

        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];

            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<bool> vis(n, false);
        queue<int> q;

        q.push(source);
        vis[source] = true;

        while(!q.empty()){
            int u = q.front();
            q.pop();

            if(u == destination) return true;

            for (int v : g[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        return false;
    }
}; 
