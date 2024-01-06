#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s; cin>>s; 

    int cnt =0;  
    int initial = 0;
    for(int i=0; i<s.size(); i++){
        
       
       int diff =abs(s[i]-('a' + initial));

       cnt = cnt + min(diff , 26-diff);
        initial = s[i]-'a';

    }
     cout<< cnt;
    
    return 0;
}