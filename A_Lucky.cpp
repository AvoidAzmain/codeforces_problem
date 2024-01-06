#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
       int a; cin>>a;
       vector<int>s;
       if(a == 0) cout<<"YES"<<endl;
       else{
        int cnt =6;
        while(cnt--){
        s.push_back(a%10);
        a/=10;
       }
       if(s[0]+s[1]+s[2] == s[4]+s[3]+s[5]) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }
       
    }
    return 0;
}