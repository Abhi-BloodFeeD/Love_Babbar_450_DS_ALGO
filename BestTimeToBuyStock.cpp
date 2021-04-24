#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

class Solution {
  public:
      int maxProfit(vector<int>& prices){
       int n = prices.size();
       int global_max=0;
       int _min=INT_MAX,_max; 
       for(int i=0;i<n;i++){
         if(prices[i]<_min){
           _min=prices[i];
         }
         global_max= max(global_max,(prices[i]-_min)) ;
         }

       return global_max; 
      }
};
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  Solution p;
  vector<int>prices = {7,1,5,3,6,4};
  cout<<p.maxProfit(prices);
return 0; 
} 
