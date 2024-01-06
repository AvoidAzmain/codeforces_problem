#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
bool visited[N];
void dfs(int vertex){
   cout<< vertex << endl;
    visited[vertex] = true;
    for(int child : g[vertex]){
        if(visited[child]) continue;
        dfs(child);
    }

}
int main()
{
    int n ;
    cout<<"enter how many edges:"<<endl;
    cin>>n;

    for( int i=0 ; i< n ; i++){
        int x,y; cin>>x>>y;
         g[x].push_back(y);
        g[y].push_back(x);

    }
    int k;
    cout<<"enter the vertex fom you wanna traverse :"<< endl;
    cin>>k;
    cout<<"after dfs"<<endl;
    dfs(k);
    return 0;
}