#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1=" that I hate",s2=" that I love";
    int n; cin>>n;

      if(n==1) cout<<"I hate it";
       
       if(n>1) cout<<"I hate";

    for(int i=2 ; i<=n ; i++){
        
        if(i%2==0) cout<<s2;
         else cout<<s1;

    }
     if(n>1) cout<<" it";
    return 0;
}