#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];
    // int u,v;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] =1;
        adj[v][u] =1;
    }
    cout<<"node in  a graph\n";
    for(int i=0;i<m;i++)
    {
        cout<<adj[i]<<adj[i];

    }
    return 0;
}