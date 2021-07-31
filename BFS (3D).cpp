/*
Breadth first search is one of the basic and essential searching algorithms on graphs.

As a result of how the algorithm works, the path found by breadth first search to any
node is the shortest path to that node, i.e the path that contains the smallest number
of edges in unweighted graphs. The algorithm works in O(n+m) time, where n is number of
vertices and m is the number of edges.

The algorithm takes as input an "unweighted graph" and the id of the source vertex s.
The input graph can be "directed" or "undirected", it does not matter to the algorithm.
*/

int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

struct point
{
    ll x, y, z;
};

struct check
{
    bool chk = false;
    char ch;
    int mn = 0;
}matrix[32][32][32];

void BFS(point sr, ll p , ll q, ll r)
{
    queue<point>Q;
    Q.push(sr);
    matrix[sr.x][sr.y][sr.z].chk = true;
    matrix[sr.x][sr.y][sr.z].mn = 0;

    while(!Q.empty())
    {
        point v = Q.front();
        Q.pop();

        for(ll i=0; i<6; i++)
        {
            ll xx=v.x+dx[i];
            ll yy=v.y+dy[i];
            ll zz=v.z+dz[i];

            if(xx<0 || yy<0  || zz<0 || xx>=p || yy>=q || zz>=r || matrix[xx][yy][zz].chk==true) continue;

            point nw;
            nw.x = xx; nw.y = yy; nw.z = zz;
            Q.push(nw);
            matrix[xx][yy][zz].chk=true;
            matrix[xx][yy][zz].mn = matrix[v.x][v.y][v.z].mn + 1;   //dis[u]=dis[v]+1;
        }
    }
}
