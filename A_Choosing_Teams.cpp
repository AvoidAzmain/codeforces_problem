#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int k; cin>>k;
    vector<int>v ;
    for(int i=1; i<=n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int cnt=0;
    for(auto it: v){
        if(it<=(5-k)) cnt++;
    }
    cout<<cnt/3;
    return 0;
}