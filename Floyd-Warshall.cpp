/*
Given a directed or an undirected weighted graph  with  vertices.
The task is to find the length of the shortest path  between each
pair of vertices  and .

The graph may have negative weight edges, but no negative weight
cycles.

If there is such a negative cycle, you can just traverse this
cycle over and over, in each iteration making the cost of the path
smaller. So you can make certain paths arbitrarily small, or in
other words that shortest path is undefined. That automatically
means that an undirected graph cannot have any negative weight
edges, as such an edge forms already a negative cycle as you can
move back and forth along that edge as long as you like.

This algorithm can also be used to detect the presence of negative
cycles. The graph has a negative cycle if at the end of the
algorithm, the distance from a vertex  to itself is negative.
*/
///######################### Floyd-Warshall ##########################
ll dist[node][node];
void FloydWarshall()  /// Complete
{
    for(ll k = 0; k < n; ++k){
      for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < n; ++j){
            if (dist[i][k] + dist[k][j] < dist[i][j])
                   dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
}

///###################################################################
