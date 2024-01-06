#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n],cnt = 0;

    for(int i=0 ; i<n ; i++){
      cin>>  ar[i];
    }
        for(int i=0 ; i<n ; i++){
            if(ar[i] ==1) cnt++;
           
        }
        if(cnt>0) cout<<"HARD"<<endl;
        else cout<<"EASY"<<endl;
    return 0;
}