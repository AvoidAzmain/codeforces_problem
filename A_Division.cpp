#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        float a; cin>>a;

        if(a <= 1399) cout<<"Division 4"<<endl;

        if( a <= 1599 && 1400 <= a ) cout<<"Division 3"<<endl;

        if( a <=1899 && 1600<= a) cout<<"Division 2"<<endl;

        if(1900<=a) cout<<"Division 1"<<endl;
    }
    return 0;
}