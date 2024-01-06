#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n; cin>>n;
   int a,b,sum2=0; cin>>a>>b;
    
   for(int i=1 ; i<=n ; i++){
       int sum=0;
       while(i!=0){
         
           sum= sum+  i%10;
          i= i/10;
       }
       if(sum>=a && sum<=b) sum2 = sum2+i;
   }
       cout<<sum2;
    return 0;
}