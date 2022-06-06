/*
Suppose that we are given a weighted directed graph  with  vertices and  edges, 
and some specified vertex . You want to find the length of shortest paths from 
vertex  to every other vertex.

Unlike the Dijkstra algorithm, this algorithm can also be applied to graphs 
containing negative weight edges . However, if the graph contains a negative 
cycle, then, clearly, the shortest path to some vertices may not exist (due to the 
fact that the weight of the shortest path must be equal to minus infinity); 
however, this algorithm can be modified to signal the presence of a cycle of 
negative weight, or even deduce this cycle.
*/
///######################### Bellman-Ford ############################
struct Edge
{
    ll from, to, val;
};
void BellmanFord()  /// Complete
{
    vector<ll>dist(node+1,INF);
    dist[1]=0;
    vector<ll>way(node+1,0);

    for(ll j=1; j<node-1; j++){
        bool any = false;
        for(ll i=0; i<edge; i++){
            if(dist[E[i].to]>dist[E[i].from]+E[i].val){
                dist[E[i].to]=dist[E[i].from]+E[i].val;
                way[E[i].to]=E[i].from;
                any = true;
            }
        }
        if(!any) break;
    }
}
///###################################################################
