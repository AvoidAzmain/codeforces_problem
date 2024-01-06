#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while (n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y;
        if(a<b) x=b;
        else x=a;
        if(c<d) y=d;
        else y=c;
        if(x>y){
            if(y > a+b-x) cout<<"YES"<<endl;
            else cout<<"NO"<<endl; 
        }
        else{
             if(x > c+d-y) cout<<"YES"<<endl;
            else cout<<"NO"<<endl; 
        }
    }
    
    return 0;
}