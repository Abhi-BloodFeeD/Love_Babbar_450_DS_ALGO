#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
int minimumChanges(int N,int *V){
  int top=V[0];
  int score=0;
  for(int i=0;i<N;i++){
    if(V[i]<top){
      score++;
      V[i]=top;
    }
    else  
      top=V[i];
  }
  return score;
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a[]={20 , 1 , 5 , 21 ,20 ,19 ,22 };
  cout<<minimumChanges(8,a)<<"------\n";
  for(auto x:a)cout<<x<<endl;
  
  
  
return 0; 
} 
