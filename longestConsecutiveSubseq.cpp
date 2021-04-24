// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      set<int>st;
      for(int i=0;i<n;i++)st.insert(arr[i]);
      int score=0,subscore=1;
      auto it=st.begin();
      for(;it!=st.end();it++){
        auto it_n=it;
        it_n++;
        if(it_n!=st.end() && *it_n-*it==1){
          subscore++;
        }
        else  
          subscore=1;
        score=max(score,subscore);
      }
      return score;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif  
  int  t,n,i,a[100001];
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    Solution obj;
    cout<<obj.findLongestConseqSubseq(a, n)<<endl;
  }
        
      return 0;
}  // } Driver Code Ends


