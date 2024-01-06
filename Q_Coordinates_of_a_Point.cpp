#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(a>0 && b>0) cout<<"Q1"<<endl;

if(a<0 && b>0) cout<<"Q2"<<endl;

if(a<0 && b<0) cout<<"Q3"<<endl;

if(a>0 && b<0) cout<<"Q4"<<endl;

if(a==0 && b==0) cout<<"Origem"<<endl;

if(b==0 && (a>0 || a<0)) cout<<"Eixo X"<<endl;


if(a==0 && (b>0 || b<0) ) cout<<"Eixo Y"<<endl;

}




