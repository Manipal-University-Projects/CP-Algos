
// For finding topological sort the graph must be the directed acyclic grapg(DAG)


// 1)Using DFS  ->O(V+E)


class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void dfs(vector<int> adj[],vector<int> &visited,int s, stack<int> &stk)
	{
	    visited[s]=1;
	    
	    for(auto ele:adj[s])
	    {
	        if(visited[ele]==0)
	        {
	            dfs(adj,visited,ele,stk);
	        }
	    }
	    stk.push(s);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> visited(V,0);
	    stack<int> stk;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
	        {
	            dfs(adj,visited,i,stk);
	        }
	    }
	    
	    vector<int> vec;
	    while(stk.empty()==0)
	    {
	        vec.push_back(stk.top());
	        stk.pop();
	    }
	    
	    return vec;
	}
};

Correct Answer.Correct Answer
Execution Time:0.18

// 2)Using BFS (Kahn's Algo) ->O(V+E)