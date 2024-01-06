// Author: Aazmain
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>v;

int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	v.push_back(x);
}

vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
{
	cout<<*it<<endl;
}

for(int value:v)
{
	cout<<value<<" "<<endl;
}





   return 0;
}
