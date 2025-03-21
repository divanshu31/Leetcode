class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        vector<string> ans;
        unordered_map<string, vector<string>> graph;
        unordered_map<string, int> indegree;
        queue<string> q;

        for(int i=0; i<recipes.size(); i++){
            string rec = recipes[i];
            indegree[rec]=0;

            for(auto ing: ingredients[i]){
                if(find(supplies.begin(), supplies.end(), ing) == supplies.end()){
                    indegree[rec]++;
                    graph[ing].push_back(rec);
                }
            }
        }

        for(auto in: indegree){
            if(in.second == 0)
                q.push(in.first);
        }

        while(!q.empty()){
            string current = q.front();
            q.pop();
            ans.push_back(current);

            for(auto ad: graph[current]){
                indegree[ad]--;
                if(indegree[ad] == 0)
                    q.push(ad);
            }
        }
        
        return ans;
    }
};