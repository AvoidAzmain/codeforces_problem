#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y; cin>>x>>y;
    int rem;
   if(x>=y){
     rem=x-y;
    cout<<y<<" "<<rem/2;
   
   

   }
   else{ 
     rem=y-x;
    cout<<x<<" "<<rem/2; 
  
   }
    return 0;
}