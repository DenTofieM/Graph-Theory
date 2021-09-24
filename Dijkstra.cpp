/*
You are given a directed or undirected weighted graph with n vertices
and m edges. The weights of all edges are non-negative. You are also
given a starting vertex s. This article discusses finding the lengths
of the shortest paths from a starting vertex s to all other vertices,
and output the shortest paths themselves.

This problem is also called single-source shortest paths problem.
*/

#define SZ 100005
vector<pr>G[SZ];
ll dist[SZ], way[SZ];
void Dijkstra(ll sr, ll node)  /// Complete
{
    priority_queue<ll>pq;
    pq.push(sr);

    for(ll i=1; i<=node; i++) dist[i]=INF;
    dist[sr]=0;
    way[sr]=0;

    while(!pq.empty()){
        ll u = pq.top();
        pq.pop();

        for(ll i=0; i<G[u].size(); i++){
            ll v = G[u][i].ff;
            ll cost = G[u][i].ss;
            if(dist[v]>dist[u]+cost){
                dist[v]=dist[u]+cost;
                way[v]=u;
                pq.push(v);
            }
        }
    }
}
