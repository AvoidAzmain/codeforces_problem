#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    vector<int>v;
    for(int i=1; i<=4; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    string s; cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') cnt=cnt+v[0];
        if(s[i]=='2') cnt=cnt+v[1];
        if(s[i]=='3') cnt=cnt+v[2];
        if(s[i]=='4') cnt=cnt+v[3];

    }
    cout<<cnt<<endl;

    return 0;
}