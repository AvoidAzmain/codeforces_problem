#include<bits/stdc++.h>
using namespace std;
int main()
{  

    string s; cin>>s;
       map<char,int >m;
           
    map<char,int>::iterator it; 


     for(int i=0; i<s.size() ; i++ ){
         
             m[s[i]]++;


        }

          int cnt=0;
     for(it = m.begin() ; it!=m.end() ; it++){
        
       cnt++;
    }

    
   if (cnt&1) cout<<"IGNORE HIM!"<<endl;
   else  cout<<"CHAT WITH HER!"<<endl;
         


    return 0;
}