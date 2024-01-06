#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int miska=0,cris=0;
    while(n--){
        int a;int b; cin>>a>>b;
        if(a>b) miska++;
        if(b>a) cris++;

    }
    if(miska>cris) cout<<"Mishka"<<endl;
    else if(miska==cris) cout<<"Friendship is magic!^^"<<endl;
    else cout<<"Chris"<<endl;

    return 0;
}