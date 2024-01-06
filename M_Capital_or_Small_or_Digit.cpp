#include<bits/stdc++.h>
using namespace std;
int main()
{
   

char x;

cin>>x;
int z;
z=x-'0';

if(z>=0&&z<=9)

{
     
     cout<<"IS DIGIT"<<endl;
}


if(z>=17&&z<=42)
{
    
     cout<<"ALPHA\n"<<"IS CAPITAL"<<endl;
}




if(z>=49&&z<=74)
{
    
     cout<<"ALPHA\n"<<"IS SMALL"<<endl;
}


}