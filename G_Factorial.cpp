#include<bits/stdc++.h>
using namespace std;
#define int  long long
const int N=1e8;
int fact[20];
int32_t main()
{
    fact[0]=1;
    fact[1]=1;

    for(int i=2;i<=20;i++){
        fact[i]=fact[i-1]*i;
    }



    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fact[n] << endl;

    }



    

    

    return 0;
}