#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cout<<"Enter the number of vertices:";
    cin>>n;
    cout<<"Enter the number of edges:";
    cin>>e;
    vector<int> adj[e];
    for(int i=0; i<e;i++)
    {
        int u,v;
        cin>>u,v;
       
        //for directional graph input
        adj[u].push_back(v);
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[j]<<" ";
        }
        cout<<endl;
    }





}