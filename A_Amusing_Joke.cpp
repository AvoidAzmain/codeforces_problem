#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c; cin>>a>>b>>c;
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0 ; i<a.size() ; i++){
        m1[a[i]]++;
    }
    for(int i=0 ; i<b.size() ; i++){
        m1[b[i]]++;
    }
    for(int i=0 ; i<c.size() ; i++){
        m2[c[i]]++;
    }

    if(m1 == m2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}