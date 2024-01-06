// Author: Aazmain
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int,int>>&v)
{


for(int i=0;i<v.size();i++)
{
	cout<<v[i].first<<" "<<v[i].second<<endl;
}

}



void printvec1(vector<int>v)
{


for(int i=0;i<v.size();i++)
{
	cout<<v[i]<<endl;
}


}







int main()    
 {
   /*//vector of pairs
   vector<pair<int,int>>v;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	int x,y;
   	cin>>x>>y;
   	v.push_back({x,y});
   }
   
   printvec(v);*/

//vector of array

   cout<<"enter the num of vec:"<<endl;
 int N;
 cin>>N;
   vector<int>v[N];
   for(int i=0;i<N;i++)
   { int a;
   	cout<<"input vector size:"<<endl;
   	cin>>a;
   	cout<<"input vectors:"<<endl;
for(int j=0;j<a;j++)
{
	int y;
	
	cin>>y;
v[i].push_back(y);
}

   }  


for(int i=0;i<N;i++)
{
   printvec1(v[i]);
}






}
