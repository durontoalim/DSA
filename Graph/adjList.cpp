// 4 3   n=node  m=edge
// 1 2
// 2 4
// 2 3

//total degree = total adjList size?

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e6+10;
vector<int>adjList[N];

int32_t main()
{
    FastIO();
    int n,m; cin>>n>>m;

    for (int i = 1; i <= m; i++)
    {
        int u,v; cin>>u>>v;

        adjList[u].push_back( v );
        adjList[v].push_back( u );
    }

    for (int i = 1; i <= n ; i++)
    {
        for(auto u: adjList[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}