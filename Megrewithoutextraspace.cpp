#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

class Solution{
public:
	void merge(int A[], int B[],int M, int N)
  {
      for (int i = 0; i < M; i++)
      {
          if (A[i] > B[0])
          {
              swap(A[i], B[0]);
              int j = 0;
              while (j + 1 < N && B[j] > B[j + 1])
                  swap(B[j], B[j + 1]), j++;
          }
      }
  }
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int N = 4, M = 5;
  int arr1[4] = {1, 3, 5, 7};
  int arr2[5] = {0, 2, 6, 8, 9};
  Solution Q;
  Q.merge(arr1,arr2,4,5);
  for(auto x:arr1)cout<<x<<endl;
  cout<<endl;
  for(auto x:arr2)cout<<x<<endl;
return 0; 
} 
