#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int x=0,a=0;
    //a=;b*(b+1)/2
   while(x<=n){
    x=x+((a*(a+1))/2);
    a++;
   }
   cout<<a-2;
    return 0;
}