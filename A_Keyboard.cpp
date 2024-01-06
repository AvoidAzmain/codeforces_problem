#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./" ; 
    char c; cin>>c;
    string sr; cin>>sr;
    for(int i=0; i<sr.size(); i++){
        int a= s.find(sr[i]);
        if(c == 'R') cout<<s[a-1];
        if(c== 'L') cout<<s[a+1];

    }
   
    
    return 0;
}