

// Using DFS and parent technique

class Solution 
{
    public:
    
    bool dfs(vector<int>adj[],vector<int> & visited,int s,int parent)
    {
        visited[s]=1;
        
        for(auto ele:adj[s])
        {
            if(visited[ele]==0)
            {
                if(dfs(adj,visited,ele,s))
                return true;
            }
            else if(ele!=parent)
            {
                return true;
            }
        }
        
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    
	    vector<int> visited(V,0);

	    bool var=false;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
    	    {
	            var=var | dfs(adj,visited,i,-1);
	        }
	    }
	    
	    return var;
	
	}
};

// O(V+_E)


// Using BFS and 0,1,2 technique

// 0->not visited
// 1->visited and in queue
// 2->visited and out of queue

class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    
    bool bfs(vector<int>adj[],vector<int> & visited,int s)
    {
        queue<int> que;
        visited[s]=1;
        que.push(s);

        
        while(que.empty()==false)
        {
            int ele=que.front();
            que.pop();
            
            for(auto v:adj[ele])
            {
                if(visited[v]==0)
                {
                    visited[v]=1;
                    que.push(v);
                }
                else if(visited[v]==1)
                {
                    return true;
                }
            }
            visited[ele]=2;
        }
        
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    
	    vector<int> visited(V,0);

	    bool var=false;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
    	    {
	            var=var | bfs(adj,visited,i);
	        }
	    }
	    
	    return var;
	
	}
};


// Cant use the 0,1,2(coloring technique in DFS since we need to keep track of the parent)