/*
Breadth first search is one of the basic and essential searching algorithms on graphs.

As a result of how the algorithm works, the path found by breadth first search to any
node is the shortest path to that node, i.e the path that contains the smallest number
of edges in unweighted graphs. The algorithm works in O(n+m) time, where n is number of
vertices and m is the number of edges.

The algorithm takes as input an "unweighted graph" and the id of the source vertex s.
The input graph can be "directed" or "undirected", it does not matter to the algorithm.
*/

#define GRng 1000                            /// Define Graph Size as GRng.
bool visited[GRng];                          /// visited variable hold an boolean value, node are traversed or not
ll dist[GRng],way[GRng];                     /// dist variable hold distance from source to any node and way variable hold previous source
vector<ll>G[GRng];                           /// Create your graph as G vector.

void BFS(ll sr)
{
    queue<ll>Q;
    Q.push(sr);
    visited[sr]=true;
    dist[sr]=0;
    way[sr]=0;

    while(!Q.empty())
    {
        ll u = Q.front();
        Q.pop();

        for(ll i=0; i<G[u].size(); i++)
        {
            ll v = G[u][i];
            if(!visited[v])
            {
                Q.push(v);
                visited[v]=true;
                dist[v]=dist[u]+1;
                way[v]=u;
            }
        }
    }
}
