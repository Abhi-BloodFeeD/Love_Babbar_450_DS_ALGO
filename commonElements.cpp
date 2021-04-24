// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       //1 2 3
       //1 2 3
       //1 2 3
      
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int run1=0,run2=0,run3=0;
            vector<int>sc;
            while(run1<n1 && run2<n2 && run3<n3){
                if(A[run1]==B[run2]&& A[run1]==C[run3]){
                    sc.push_back(A[run1]);
                    run1++;run2++;run3++;
                }
                else{
                    if(A[run1]<=B[run2] && A[run1]<=C[run3])cout<<"A "<<A[run1++]<<"\n";
                    else if(B[run2]<=A[run1] && B[run2]<=C[run3])cout<<"B "<<B[run2++]<<"\n";
                    else cout<<"C "<<C[run3++]<<"\n";
                }
            }
            return sc;
            
        }

};

// { Driver Code Starts.

int main ()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends