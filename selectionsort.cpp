#include<bits/stdc++.h>
using namespace std;

int sls(int ar[],int n)
{
  int i,j,minimum;
  for(i=0;i<n-1;i++)
  {
      minimum=i;
      for(j=i+1;j<n;j++)
      {
          if(ar[j]<ar[minimum])
                {minimum=j;}

          }


      if(ar[minimum]!=ar[i])
      {
          swap(ar[i],ar[minimum]);

      }

  }

}


int main()
{


int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{

    cin>>a[i];
}

sls(a,n);
for(i=0;i<n;i++)
{

    cout<<a[i];
}


}
