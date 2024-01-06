#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int , list<int>>adj;

    void addedge( int u, int v , bool dir){
          //dir = 0 undirectional
         // dir =1 directional 
         adj[u].push_back(v); 
         if(dir == 0){
            adj[v].push_back(u);
         }

    }
    void printadjlist(){
        for(auto i : adj){
            cout<<i.first<<"->";
            for(auto j : i.second){
                cout<< j <<",";
            } cout<<endl;
        }
    }
};

int main()
{
    int n; cout<<" enter number of nodes :"<<endl;
    cin>>n;
     int m; cout<<" enter number of edges :"<<endl;
    cin>>m;
    graph g;
    for(int i=0 ; i<m ; i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
       g.printadjlist();

    return 0;
}