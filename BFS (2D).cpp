/*
Breadth first search is one of the basic and essential searching algorithms on graphs.

As a result of how the algorithm works, the path found by breadth first search to any
node is the shortest path to that node, i.e the path that contains the smallest number
of edges in unweighted graphs. The algorithm works in O(n+m) time, where n is number of
vertices and m is the number of edges.

The algorithm takes as input an "unweighted graph" and the id of the source vertex s.
The input graph can be "directed" or "undirected", it does not matter to the algorithm.
*/
#define pr pair<ll,ll>

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};

int m=1000, n=1000;

struct Mat
{
    char ch;
    bool B;
}matrix[m][n];

void BFS(ll x, ll y, ll m , ll n)
{
    queue<pr>Q;
    Q.push({x,y});
    matrix[x][y].B = true;

    while(!Q.empty())
    {
        pr v = Q.front();
        Q.pop();

        for(ll i=0; i<4; i++)
        {
            ll r = v.first+dx[i];
            ll c = v.second+dy[i];

            if(r<0 || c<0 || r>=m || c>=n || matrix[r][c].B==true) continue;
            Q.push({r,c});
            matrix[r][c].B=true;
        }
    }
}
