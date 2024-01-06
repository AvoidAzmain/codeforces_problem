#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q; cin>>n;
    
    set<int>v;
    cin>>p; int  ar[p];
    for(int i=0 ; i<p ; i++){
        cin>>ar[i];
             v.insert(ar[i]);

    }

    cin>>q; int ar1[q];
        for(int i=0 ; i<q ; i++){
             cin>>ar1[i];
                 v.insert(ar1[i]);

             }

    int cnt=0;
    set<int>::iterator it;
     for (it = v.begin(); it != v.end(); it++) {
                  cnt++;
    }

        if(cnt == n) cout<<"I become the guy."<<endl;

        else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}