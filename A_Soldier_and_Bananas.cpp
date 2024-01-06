#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k ,n ;  long long w;  cin>>k>>n>>w;
     long long x;
     x = k*(w*(w+1)/2);
       if (x>n) cout<< x-n <<endl;
       else cout<<"0"<<endl;
        
    return 0;
}