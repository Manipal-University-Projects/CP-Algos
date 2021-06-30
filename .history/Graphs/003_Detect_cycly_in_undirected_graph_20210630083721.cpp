
// class Solution 
// {
//     public:
//     //Function to detect cycle in an undirected graph.
    
//     bool dfs(vector<int>adj[],vector<int> & visited,int s,int parent)
//     {
//         visited[s]=1;
        
//         for(auto ele:adj[s])
//         {
//             if(visited[ele]==0)
//             {
//                 dfs(adj,visited,ele,s);
//             }
//             else if(visited[ele]==1 && ele!=parent)
//             {
//                 return true;
//             }
//         }
//         visited[s]=2;
        
//         return false;
//     }
// 	bool isCycle(int V, vector<int>adj[])
// 	{
// 	    // Code here
	    
// 	    vector<int> visited(V,0);

// 	    bool var=false;
	    
// 	    for(int i=0;i<V;i++)
// 	    {
// 	        if(visited[i]==0)
//     	    {
// 	            var=var | dfs(adj,visited,i,-1);
// 	        }
// 	    }
	    
// 	    return var;
	
// 	}
// };