#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

void printing(int a[],int N){
  for(int i=0;i<N;i++)cout<<a[i]<<endl;
}

void reverse_inplace(int *a ,int N){
  int end=N-1,start=0;
  while(start<end){
    swap(a[start],a[end]);
    start++;end--;
  }
  printing(a,N);
}
void reverse(int a[],int N){
  int b[N];
  for(int i=N-1;i>=0;i--){
      b[i]=a[N-1-i];
    }
  printing(b,N);
}

int main() {
  
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  reverse(a,n);
  reverse_inplace(a,n);
  
return 0; 
} 
