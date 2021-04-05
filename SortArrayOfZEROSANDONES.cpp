#include<bits/stdc++.h>
using namespace std;

#define ll long long

class Solution{
  public:
    void sort012(int a[],int n){
      int begin = 0 ;int end = n-1;
      int runner=0;
      while(runner<=end){
        if(a[runner]==0)
          swap(a[runner++],a[begin++]);
        else if(a[runner]==2)
          swap(a[runner],a[end--]);
        else runner++;
      }
    }
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a[54]={0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1,0,1,2,2,1,1};
  Solution solver;
  solver.sort012(a,54);
  for(auto x:a)cout<<x<<" ";
  
  
return 0; 
} 
