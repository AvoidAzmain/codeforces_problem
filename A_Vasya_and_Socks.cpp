#include<bits/stdc++.h>
using namespace std;

int getRemainder(int num, int divisor)
{
    return (num - divisor * (num / divisor));
}
int main()
{
    int n,m; cin>>n>>m;
    int cnt1=0 , cnt2=0 ,ans;  
  for(int i=1; i<=100; i++){
      if(getRemainder(i,m) != 0) cnt1++;
      if(getRemainder(i,m) == 0) cnt2++;
      if(cnt1 == n)  ans =cnt2;
  }
         
         

   
    cout<<cnt2+n<<endl; 
    return 0;
}