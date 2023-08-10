class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int>adj[n];
        vector<int>indegree(n,0);
        vector<int>ans;

        for(auto x:prerequisites){
            adj[x[0]].push_back(x[1]);
        }

        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int front = q.front();
            ans.push_back(front);
            q.pop();

        for(auto x:adj[front]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
    }

        return ans.size()==n;
    }
};
