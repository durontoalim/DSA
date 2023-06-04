#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+7;
vector< pair<int,int> >adjMat[N];

int main()
{
    int node,edge; cin>>node>>edge;

    for (int i = 1; i <= edge; i++)
    {
        int u,v,weight; cin>>u>>v>>weight;

        adjMat[u].push_back({v,weight});
        adjMat[v].push_back({u,weight});
    }

    for (int i = 1; i <= node; i++)
    {
        for (auto u: adjMat[i])
        {
            cout<<"Node : "<<u.first<<" Cost: "<<u.second<<endl;
        }
        cout<<endl;
    }
    
    
    

    return 0;
}