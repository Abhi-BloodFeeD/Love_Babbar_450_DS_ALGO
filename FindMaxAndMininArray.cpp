#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
void findminmax(int *a,int n){
int mini=INT_MAX;
int maxi=INT_MIN;
for(int i=0;i<n;i++){
  mini = min(mini,a[i]);
  maxi = max(maxi,a[i]);
  }
  cout<<" MIN - MAX "<<mini<<"-"<<maxi<<endl;
}
void minmax(int *a , int n){
  cout<<*min_element(a,a+n)<<"-"<<*max_element(a,a+n);
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a[]={1,2,3,4,34,456,467,67,85678,78,978};  
  int n = sizeof(a)/sizeof(a[0]);
  findminmax(a,n);//self defined function
  minmax(a,n);    //using STL
return 0; 
} 

