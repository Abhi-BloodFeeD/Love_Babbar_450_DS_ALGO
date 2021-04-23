#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
class Solve{
  public:
    int UnionCount(int a[],int n,int b[],int m){
      int i=0,j=0,cnt=0;
      
      while(i<n && j<m){
        if(a[i]<b[j])i++;
        else if(b[j]<a[i])j++;
        else {
          cnt++;
          i++;
          j++;
        }
      }
      return cnt;
    }  
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  Solve Q;
  int a[4]={1,3,5,7};
  int b[4]={3,5,7,9};
  cout<<Q.UnionCount(a,4,b,4);
  
  
return 0; 
} 
