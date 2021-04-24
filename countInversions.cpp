#include <bits/stdc++.h>
using namespace std;

#define ll long long

 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(ll *arr,ll start,ll mid,ll end){
      vector<ll>solution;
      ll runner_1=start , runner_2 = mid+1;
      
      //Running merge elements
      while(runner_1<=mid && runner_2<=end){
        if(arr[runner_1]<arr[runner_2])
          solution.push_back(arr[runner_1++]);
        else
          solution.push_back(arr[runner_2++]);
       }
      
      //Remaining if any in first half
      while(runner_1<=mid){
        solution.push_back(arr[runner_1++]); 
      }
      
      //Remaining if any in Second half
      while(runner_2<=end){
        solution.push_back(arr[runner_2++]);
      }  
      int run=0;
      for(int i=start;i<=end;i++){
        arr[i] = solution[run++];
      }
      return
    }
    //TIME - O(NLOGN) || Space - O(N)
    void mergeSort(ll *arr,ll start,ll end){
      if(start==end)return;
      ll mid = (start+end)/2;
      mergeSort(arr,start,mid);
      mergeSort(arr,mid+1,end);
      merge(arr,start,mid,end);
    }
    long long int inversionCount(long long arr[], long long N)
    {
        
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends