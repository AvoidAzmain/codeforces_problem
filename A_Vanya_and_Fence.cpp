#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h; cin>>n>>h;
    int ar[n],cnt = 0;

    for(int i=0 ; i<n ; i++){
      cin>>  ar[i];
    }
        for(int i=0 ; i<n ; i++){
            if(ar[i] <= h) cnt++;
            if(ar[i]>h) cnt+=2;
        }
        cout<<cnt<<endl;
    return 0;
}