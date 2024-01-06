#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;
    char ar[a][b];
    vector<char>v;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>ar[i][j];
            v.push_back(ar[i][j]);

        }
    }
      int flag=0; 
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]=='C' || v[i]=='M' || v[i]=='Y') flag++;
    // }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
           if(ar[i][j]=='C' || ar[i][j]=='M' || ar[i][j]=='Y') flag++;

        }
    }

    if(flag == 0) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
    return 0;
}