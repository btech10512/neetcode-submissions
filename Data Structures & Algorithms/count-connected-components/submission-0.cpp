class Solution {
public:
    void bfs(int node,vector<int> &visited,vector<vector<int>> &adj) {
                visited[node] = 1;

                        for(int i=0;i<adj[node].size();i++) {
                                    if(!visited[adj[node][i]]) {
                                                    bfs(adj[node][i],visited,adj);
                                                                }
                                                                        }
                                                                            }
                                                                                int countComponents(int n, vector<vector<int>>& edges) {
                                                                                        vector<vector<int>>adj(n);

                                                                                                for(int i=0;i<edges.size();i++) {
                                                                                                            adj[edges[i][0]].push_back(edges[i][1]);
                                                                                                                        adj[edges[i][1]].push_back(edges[i][0]);
                                                                                                                                }
                                                                                                                                        vector<int>visited(n,0);
                                                                                                                                                int count = 0;

                                                                                                                                                        for(int i=0;i<adj.size();i++) {
                                                                                                                                                                    if(!visited[i]) {
                                                                                                                                                                                    bfs(i,visited,adj);
                                                                                                                                                                                                    count++;
                                                                                                                                                                                                                }else {
                                                                                                                                                                                                                                continue;
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                            return count;
                                                                                                                                                                                                                                                                
    }
};
