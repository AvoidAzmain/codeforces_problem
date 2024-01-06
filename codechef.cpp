#include<bits/stdc++.h>
using namespace std;
int main()
{

int ar[4],i,x=0;

for(i=0;i<4;i++)
{
    cin>>ar[i];

}
for(i=0;i<4;i++)
{
    if(ar[i]>=10)
    {
        x++;
    }
}

cout<<x<<endl;



    return 0;
}