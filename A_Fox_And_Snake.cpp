#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    bool flag;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            if(i%2 != 0) cout<<"#";

            if(i%2==0 && (i/2)%2==0) {
                if(j==1) cout<<'#';
                else cout<<'.';
            } else if(i%2==0 && (i/2)%2!=0) {
                if(j==m) cout<<'#';
                else cout<<'.';
            }
        }cout<<endl;

    }
    return 0;
}