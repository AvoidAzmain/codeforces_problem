#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n];
    float cnt=0;
     for(int i=0 ; i<n ; i++){
      cin>>  ar[i];
    }
     for(int i=0 ; i<n ; i++){
       cnt = cnt+ ar[i];
    }
    cout<<(cnt/n)<<endl;
    return 0;
}