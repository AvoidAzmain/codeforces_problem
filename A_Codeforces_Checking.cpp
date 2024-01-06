#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    string s="codeforces";
    while (n--)
    {
      char a; cin>>a;
       
              if(s.find(a) <= sizeof(s))  cout<<"YES"<<endl; 

           
            else cout<<"NO"<<endl;
      
    }
    
    return 0;
}