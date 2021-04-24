#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    long long score=0;
    
    void merge(long long *arr,long long start,long long mid,long long end){
      vector<long long>solution;
      long long runner_1=start , runner_2 = mid+1;
      while(runner_1<=mid && runner_2<=end){
        if(arr[runner_1]<=arr[runner_2])
          solution.push_back(arr[runner_1++]);
        else{
          solution.push_back(arr[runner_2++]);
          score+=mid-runner_1+1;
        }
       }
      while(runner_1<=mid){
        solution.push_back(arr[runner_1++]); 
      }while(runner_2<=end){
        solution.push_back(arr[runner_2++]);
      }  
      int run=0;
      for(int i=start;i<=end;i++){
        arr[i] = solution[run++];
      }
      return;
    }
    void mergeSort(long long *arr,long long start,long long end){
      if(start==end)return;
      long long mid = (start+end)/2;
      mergeSort(arr,start,mid);
      mergeSort(arr,mid+1,end);
      merge(arr,start,mid,end);
      return ;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {    
      mergeSort(arr,0,N-1);
      return score;
    }

};

// { Driver Code Starts.

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
    
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