class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>Indegree(numCourses,0);
                vector<vector<int>> adj(numCourses);
                        int count = 0;
                                for(int i = 0; i < prerequisites.size(); i++) {
                                            int course = prerequisites[i][0];
                                                        int prerequisite = prerequisites[i][1];

                                                                    adj[prerequisite].push_back(course);
                                                                            }
                                                                                    for(int i=0;i<prerequisites.size();i++) {
                                                                                                Indegree[prerequisites[i][0]]++;
                                                                                                        }
                                                                                                                queue<int>q;
                                                                                                                        for(int i=0;i<numCourses;i++) {
                                                                                                                                    if(Indegree[i] == 0) {
                                                                                                                                                    q.push(i);
                                                                                                                                                                }
                                                                                                                                                                        }
                                                                                                                                                                                while(!q.empty()) {
                                                                                                                                                                                            int node = q.front();
                                                                                                                                                                                                        q.pop();
                                                                                                                                                                                                                    count++;
                                                                                                                                                                                                                                for(int i=0;i<adj[node].size();i++) {
                                                                                                                                                                                                                                                Indegree[adj[node][i]]--;
                                                                                                                                                                                                                                                                if(Indegree[adj[node][i]] == 0) {
                                                                                                                                                                                                                                                                                    q.push(adj[node][i]);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                return (count == numCourses);
    }
};
