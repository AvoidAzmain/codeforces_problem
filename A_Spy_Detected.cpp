#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        int a ; cin>>a;
        map<int,int>m;
        vector<int>v;
            while(a--){
                int d; cin>>d;
               v.push_back(d);
                
                m[d]++;
                
                 
            }
            int b;
            for(map<int,int>:: iterator it = m.begin(); it!=m.end(); it++){
                    if((*it).second == 1) {
                        //cout<<(*it).first<<endl;
                        b=(*it).first;
                    }
                    
            }
             for(int i=0;i<v.size() ; i++){
                if(v[i]==b) cout<<i+1<<endl;
             }



    }
    return 0;
}