#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;
   vector<int>v;
   v.push_back(a);  
    v.push_back(b);  
     v.push_back(c);  
    // int rem =(a+b+c)-*min_element(v.begin(), v.end())-*max_element(v.begin(), v.end());
    int max =*max_element(v.begin(), v.end());
    int min =*min_element(v.begin(), v.end());
     cout<<max - min;
     return 0;
}