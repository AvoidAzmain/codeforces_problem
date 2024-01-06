#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int a= sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+a);
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}