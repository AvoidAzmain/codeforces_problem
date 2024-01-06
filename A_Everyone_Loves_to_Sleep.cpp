#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while (n--)
    {
        int a; cin>>a;
         int h,m; cin>>h>>m;
        vector<pair<int,int>>v;
        
        while(a--){
            int x,y; cin>>x>>y;
           v.push_back({x,y});

        }
        sort(v.begin(),v.end());
        int found=0 ,nh,nm;

        for(int i=0; i<a; i++){
            if(v[i].first>= h){
                if(v[i].second >= m){
                    found =1;
                    nh= v[i].first;
                    nm= v[i].second;
                    break;
                    
                }

            }

            //  if(v[i].first > h){
            //     found =1;
            //     nh= v[i].first;
            //     nm=v[i].second;
            //     break;

            // }
        }

            if(found == 0){
               nh=v[0].first;
               nm=v[0].second;
              // nh+=24;

            }

            // if(h==nh && m==nm){
            //     cout<<"0 0"<<endl;
            //     continue;
            // }
            // if(nh> h && nm>=m){
            //     cout<<nh-h <<" "<<nm-m<<endl;

            // }
            // if(nh>h && nm<m) cout<<nh-h<<" "<<60-m+nm<<endl;

            // if(nh<h && nm==h) cout<< nh+24-h <<" "<<"0"<<endl;
            // if(nh<h && nm<h) cout<< nh+24-1-h<<" "<< 60-m+nm <<endl;
            // if(nh<h && nm>h) cout<< nh+24-h <<" "<<nm-m<<endl;

            // if(nm<m){
            //     nm+=60;
            //     nh--;
            // }

            // int ansh=nh-h ;
            // int ansm=nm-m;
            // if(ansh >= 24) ansh=ansh-24;
            // cout<<ansh<<" "<<ansm<<endl;
            if(nh==h && nm==m) cout<<"0"<<" "<<"0"<<endl;
            if(nh>=h && nm>m) cout<<nh-h<<" "<<nm-m<<endl;
            if(nh>h && nm<m) cout<<nh-h-1<<" "<<nm+60-m<<endl;
            if(nh<h){  
                if(nm>m) cout<<nh+24-h<<" "<<nm-m<<endl;
                if(nm<m) cout<<nh+24-h-1<<" "<<nm+60-m<<endl;
            }
            // cout<<nh<<" "<<nm<<endl;
        
    }
    

    return 0;
}