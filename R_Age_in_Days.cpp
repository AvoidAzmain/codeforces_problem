#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,a;
cin>>n;
cout <<n/365<< " years"<< endl;
 a = (n%365) ;
 cout<<a/ 30<<" months"<<endl;
 
 cout<<a%30<<" days"<<endl;

    return 0;
}