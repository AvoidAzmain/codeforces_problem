#include<bits/stdc++.h>
using namespace std;
int main()
{

string s;
cin>>s;
auto found=s.find('.');
s.erase(s.begin()+0,s.begin()+found+1);
cout << s << '\n';



}