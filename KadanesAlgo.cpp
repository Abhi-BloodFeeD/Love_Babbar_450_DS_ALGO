#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int kadanesAlgo(int a[],int n){
  int sum=INT_MIN;
  int sum_local=0;
  for(int i=0;i<n;i++){
    sum_local=max(sum_local+a[i],a[i]);
    sum=max(sum_local,sum);
  }
  return sum;
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int N = 5;
  int arr[N] = {1,2,3,-2,5};
  cout<<kadanesAlgo(arr,5);

  
return 0; 
} 
