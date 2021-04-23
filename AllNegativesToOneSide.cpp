#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;


class Solve{

  public:
  void NegativeAside(int *a,int n){
    int s=0;int e=n-1;
    int p=0;int ptr=0;
    while(ptr<e){
      if(a[ptr]<0){
        swap(a[ptr++],a[s++]);
      }
      else{
        swap(a[ptr],a[e--]);
      }
    }
  }
  void NegativeAside2(int *a,int n){
    int j=0;
    for(int i=0;i<n;i++){
      if(a[i]<0)swap(a[i],a[j++]);
    }
  }
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  Solve Q;
  int a[8]={-1,-3,-5,-3,2,3,6,8};
  Q.NegativeAside2(a,8);
  for(auto X:a)cout<<X<<" ";
  
  
return 0; 
} 
