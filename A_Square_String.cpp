#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int cnt=0;
        if(s.size()%2==0){
            for(int i=0; i<s.size()/2; i++){
                if(s[i]!=s[s.size()/2+i]) cnt++;
            }
            if(cnt ==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        /* code */
    }
    
    return 0;
}