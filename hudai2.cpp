#include<bits/stdc++.h>
using namespace std;




vector<long long>all_primes;
void sieve(long long n){
  vector<bool>prime(n+1,true);
  prime[0]=false;prime[1]=false;
  for(long long i=2;i*i<=n;i++){
    if(prime[i]){
      
      for(long long j=i*i;j<=n;j+=i){
        prime[j]=false;
      }
    }
    long long cnt=0;
    for(long long i=2;i<=n;i++){
      if(prime[i]){
        all_primes.push_back(i);
        cnt++;
      }
    }
    cout << cnt << endl;
    
  }
  
                                      // i*i <= n     i<=sqrt(n)
}
int main()
{


  sieve(10000);
  for(auto u : all_primes ) cout << u << ' ';
 

  
  // return 0;                     // 2 3  5  7    11  13  1  17  19    23  25
   
}


