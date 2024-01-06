#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        int f; cin>>f;
        string a; cin>>a;
        bool flag = 1;
        map<char,int>m;
        for(int i=0; i<f; i++){
           m[a[i]]++;
           if(m[a[i]] >1 && a[i-1] != a[i]){
            flag = 0;
            break;
           }
        }
       
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}