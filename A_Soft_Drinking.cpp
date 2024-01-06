#include<bits/stdc++.h>
using namespace std;
int main()
{//mot manush n, k, l, c, d, lobon p, perpersondrinks nl, parpersonlobon np

    int n, k, l, c, d, p, nl, np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int motdrinks = k*l;
    int motlebuslice=c*d;
     vector<int>v;
    int dfa = motdrinks/n/nl;
    int lfa = motlebuslice/n;
    int lofa= p/n/np;
    v.push_back(dfa);
    v.push_back(lfa);
    v.push_back(lofa);

//     int cnt=0;
   
//    int motdrinksforoneperson = motdrinks /n;
//    int motlebusliceforoneperson = motlebuslice/n;
//    int motlobonforperperson = p/n;
  
    //  int afterd= motdrinksforoneperson/ initialdrinks;
    
    //  int afterl= motlebusliceforoneperson/l;
    
    //  int a = p/n/np;
     
     cout<< *min_element(v.begin(), v.end());
    return 0;
}