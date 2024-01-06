#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,a; cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
      for(int i=1; i<n; i++){
        if(ar[i]< ar[i-1]){
            a= i;
            break;
        }
    }
    
     cout<<a+1<<endl;
    
    
}s