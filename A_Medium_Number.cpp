#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    while(n--){
        int a,b,c; cin>>a>>b>>c;

        vector<int>s; 
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);

        sort(s.begin(), s.end());
        cout<<s[1]<<endl;
    }
    return 0;
}