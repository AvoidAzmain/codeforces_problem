#include<bits/stdc++.h>
using namespace std;
int main()
{
    //n m a b
    int m,n,a,b;
    cin>>n>>m>>a>>b;
    if(m*a <= b){
        cout<<n*a;
    }
    else  cout<<(n/m)*b+ min((n%m)*a,b);


    return 0;
}