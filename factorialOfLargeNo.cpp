#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5;

class Solution {
public:
    int multiply(int x, vector<int>res, int res_size){
        int carry = 0;
        for (int i=0; i<res_size; i++){
            int prod = res[i] * x + carry;
            res[i] = prod % 10;  
            carry  = prod/10;    
        }
        while (carry){
            res[res_size] = carry%10;
            carry = carry/10;
            res_size++;
        }
        return res_size;
    }
    vector<int> factorial(int n){
        vector<int>res;
        res[0] = 1;
        int res_size = 1;
        for (int x=2; x<=n; x++)
            res_size = multiply(x, res, res_size);
        reverse(res.begin(),res.end());
        return res;
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
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
  
  
return 0; 
} 

// { Driver Code Starts.
