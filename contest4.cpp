#include<bits/stdc++.h>
using namespace std;
int main()
{

int N,A,B,Z;
cin>>N>>A>>B>>Z;

if(A+B>Z)
cout<<"YES";
else
cout<<"NO\n"<<Z-(A+B)<<endl;



}

