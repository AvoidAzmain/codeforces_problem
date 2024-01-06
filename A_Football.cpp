#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int cnt1 =0;
    for(int i=0; i<s.size(); i++){
        int cnt =0;
        for(int j=i; j<i+7; j++){
             char a= s[i];
            if(s[j]== a) cnt++;
        }
        if(cnt ==7){
            cnt1=1;
            break;
        }
        

        
    }

    if(cnt1 ==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
