#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v;

    for(int i=1; i<=n; i++){
      int a; cin>>a;
      v.push_back(a);
    }
    int max = *max_element(v.begin(),v.end());
        int cnt=0;
        for(int i=0; i<n; i++){
            cnt=cnt+(max - v[i]);
        }
        cout<<cnt;
    return 0;
}