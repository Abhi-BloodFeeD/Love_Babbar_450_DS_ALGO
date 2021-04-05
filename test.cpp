#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 998244353;
const int mxN = 2e6;
ll dp[mxN+1];
bool prime[mxN+1];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[1]=true;
    prime[0]=true;
}
int main() {

  dp[1]=0;
  int t;cin>>t;
  SieveOfEratosthenes(mxN);  
  for(int i=2;i<=mxN;i++){
    if(prime[i])
      dp[i]=1;
    else if(i%2==0)
      dp[i]=(i/2)*dp[2]+2*dp[i/2];
    else if(i%3==0)
      dp[i]=(i/3)*dp[3]+3*dp[i/3];
  }  

  while(t--){
    ll sum=0;
    ll L,R;cin>>L>>R;
    for(int i=L;i<=R;i++)
    {
      for(int j=1;j<=i;j++)
      {
        if(i%j==0)
        {
          sum+=dp[j];
          sum%=mod;
        }
      }
    }
    cout<<sum<<endl;
  }
return 0; 
} 
