#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt =0; cin>>n;
    string c; cin>>c;
    set<char>s; 

     for(int i=0 ; i<c.size() ; i++){
        if(c[i]>='A' && c[i] <='Z' ) c[i] = c[i]+32;
     }
     

        for(int i=0 ; i<c.size() ; i++){
        s.insert(c[i]);
    }

            set<char>::iterator it; 
                for(it = s.begin() ; it != s.end() ; it++){
                    cnt++;
                }

            if(cnt==26) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    return 0;
}