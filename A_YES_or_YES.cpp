#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n; cin>>n;
    while(n--){
        string s1;
        cin>>s1;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        if(s1[0]=='Y' && s1[1]=='E' && s1[2]=='S') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}