#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

class Solution{
 public:int minJumps(int arr[], int n)
  {
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;
    int i = 1;
    for (i = 1; i < n; i++) {
        if (i == n - 1)
            return jump;
        maxReach = max(maxReach, i + arr[i]);
        step--;
        if (step == 0) {
            jump++;
            if (i >= maxReach)
                return -1;
          step = maxReach - i;
        }
    }

    return -1;
  }
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  // int N=11 ;
  int N=6 ;
  int arr[N]={1,4,3,2,7,6};
  // int arr[N]={1 ,3 ,5 ,8 ,9 ,2 ,6 ,7 ,6 ,8 ,9}; 
  Solution Q;
  cout<<Q.minJumps(arr,N);
return 0; 
} 
