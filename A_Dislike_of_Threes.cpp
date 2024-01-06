#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1; i<=1666; i++){
        if((i%10)!=3 && (i%3)!=0){
            v.push_back(i);
        }
    }
    int k; cin>>k;
    while(k--){
        int t;
        cin>>t;
        cout<<v[t-1]<<endl;
    }


  
    return 0;
}