#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n=8;
  int a[n]={2,3,4,5,6,7,8,1};
  int hp=a[n-1];
  for(int i=n-1;i>1;i++){
    a[i]=a[i-1];
  } 
  a[0]=hp;
  
  
return 0; 
} 
