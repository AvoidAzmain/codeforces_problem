#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    map<string,int>m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;
    long sum =0;
    for(int i=1 ; i<=n; i++){
        string s;
        cin>>s;
       sum += m[s];

    }
    cout<<sum;
    return 0;
}