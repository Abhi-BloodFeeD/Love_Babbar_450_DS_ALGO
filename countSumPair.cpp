#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
//1 1 1 1
    int getPairsCount(int arr[], int n, int k) {
      map<int,int>mp;
      for(int i=0;i<n;i++){
        mp[arr[i]]++;
      }
      int score=0;
      int score_mid=0;
      for(int i=0;i<n;i++){
        if(mp.find(k-arr[i])!=mp.end()){
          if(k==2*arr[i])score_mid++;
          else score+=mp[k-arr[i]];
        }
      }
      return ((score/2)+(score_mid*(score_mid-1)/2));
    }
};
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}