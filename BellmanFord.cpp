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
