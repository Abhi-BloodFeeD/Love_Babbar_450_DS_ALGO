#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
class Solve{
  public:
  void unionTwoSortedArrays(int a[],int n,int b[],int m,int c[]){
    int i=0,j=0,k=0;
    //int c[m+n];
    while(i<n && j<m){
      if(a[i]<b[j]){
        c[k++]=a[i++];
      }
      else {
        c[k++]=b[j++];
      }
    }
    while(i<n){
        c[k++]=a[i++];
      }
    while(j<m){
        c[k++]=b[j++];
      }
    return;
    }
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a[4]={2,3,7,9};
  int b[4]={1,5,8,88};
  Solve Q;
  int d[8];
  Q.unionTwoSortedArrays(a,4,b,4,d);
  for(int i=0;i<8;i++)cout<<d[i]<< " "; 
  
return 0; 
} 
