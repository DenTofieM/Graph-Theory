/*
Depth First Search is one of the main graph algorithms.

Depth First Search finds the lexicographical first path in the graph from
a source vertex u to each vertex. Depth First Search will also find the
shortest paths in a tree (because there only exists one simple path), but
on general graphs this is not the case.

The algorithm works in O(m+n) time where n is the number of vertices and m
is the number of edges.

The idea behind DFS is to go as deep into the graph as possible, and
backtrack once you are at a vertex without any unvisited adjacent vertices.

It is very easy to describe / implement the algorithm recursively: We start
the search at one vertex. After visiting a vertex, we further perform a DFS
for each adjacent vertex that we haven't visited before. This way we visit
all vertices that are reachable from the starting vertex.
*/

vector<ll>G[GRng];
ll way[GRng], dis[GRng], prv[GRng], pst[GRng], cnt=0;

void DFS(ll v)
{
    prv[v]=++cnt;
    for(ll i=0; i<G[v].size(); i++)
    {
        ll u=G[v][i];
        if(u!=way[v])
        {
            way[u]=v;
            dis[u]=dis[v]+1;
            DFS(u);
        }
    }
    pst[v]=++cnt;
}
