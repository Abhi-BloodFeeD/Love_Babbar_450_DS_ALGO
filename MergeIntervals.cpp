#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>>vo;
        vector<int>vi;
        vi.push_back(intervals[0][0]);
        vi.push_back(intervals[0][1]);
        for(int i=1;i<n;i++)
        {
            if(vi[1]>=intervals[i][0]){
              if(vi[1]<intervals[i][1]){
                  vi[1]=intervals[i][1];
              }                     
            }
            else{
                vo.push_back(vi);
                vi[0]=intervals[i][0];
                vi[1]=intervals[i][1];
            }
        }
        vo.push_back(vi);
        return vo;
    }
};
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  vector<vector<int>>v= {{1,3},{2,6},{8,10},{15,18}};
  Solution Q;
  vector<vector<int>> vm = Q.merge(v);
  for(auto x:vm)
    cout<<x[0]<<"-"<<x[1]<<"\n";
  
return 0; 
} 
