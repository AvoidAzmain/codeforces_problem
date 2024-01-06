#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int x= 240 - k;
      int sum = 0,cnt = 0;
    for(int i=1 ; i<=n ; i++){
            sum = sum + 5*i;
            if (sum <= x){
                cnt++;
            }
           
            
    }
    cout<<cnt<<endl;
        
    return 0;
}