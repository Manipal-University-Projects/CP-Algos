


void DFS(int v)
{
    visited[v] = true;

    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
 