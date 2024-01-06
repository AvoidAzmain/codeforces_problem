#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
int visited[N];
void bfs(int source){
    queue<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int curntver = q.front();
        q.pop();
        cout<<curntver<<" ";
        for(int child : g[curntver]){
          if(!visited[child]){
            q.push(child);
            visited[child]=1;}

        }

    }

}
int main()
{
    int n; cout<<"enter how many edges:"<<endl;
     cin>>n;
    for(int i=0 ; i<n  ; i++){
        int x,y; cin>>x>>y; 
        g[x].push_back(y);
        g[y].push_back(x);

    } 

    int startingNode;
    cout<<"enter the vertex fom you wanna traverse :"<< endl;
    cin>>startingNode;
    cout<<"after bfs:"<<endl;
    bfs(startingNode);
    return 0;
}