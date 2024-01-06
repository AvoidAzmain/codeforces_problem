#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a; cin>>n; 
    vector<int>v;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        v.push_back(a);
    }
     vector<int>:: iterator it;
    int max = max_element(v.begin(),v.end()) - v.begin();
   
    int min = min_element(v.begin() , v.end()) - v.begin();

    for(int i=max ; i>=0 ; i--){
        if(v[i] == v[max]) max = i;
    }
    for(int i=min; i<n ; i++){
        if(v[i] == v[min]) min = i;
    }
    max++, min++;
    if(max==1 && min==n) cout<<0;
    else if(max> min) cout<<(max -1)+ n-(min+1);
    else cout<<(max -1)+ n-(min);
}
