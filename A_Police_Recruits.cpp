#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    int a;
    int untr =0;
    int poiraase =0;
    for(int i=0; i<n; i++){
        cin>> a;
        if(a>0) poiraase += a;
        else {
            if(poiraase < 1) untr ++;
            else poiraase--;
        }
    }
    cout<<untr;
    return 0;
}