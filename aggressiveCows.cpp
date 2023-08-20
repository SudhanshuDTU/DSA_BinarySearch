#include<iostream>
using namespace std;

class Solution {
public:
  bool isPossible(vector<int> &stalls,int n,int k,int mid){
      int cowCount = 1;
      int lastpos = stalls[0];
      
      for(int i=0;i<n;i++){
          if(stalls[i] - lastpos >= mid){
              cowCount++;
              if(cowCount==k){
                  return true;
              }
              lastpos = stalls[i];
          }
      }
      return false;
  }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
         int maxi = -1;
         for(int i=0;i<n;i++){
          maxi = max(maxi,stalls[i]);
         }
         
         int s=0;
         int e = maxi;
         int mid = (s+e)/2;
         int ans=-1;
         
         while(s<=e){
             if(isPossible(stalls,n,k,mid)){
                 ans = mid;
                 s=mid+1;
             }
             else{
                 e=mid-1;
             }
             mid = (s+e)/2;
         }
         return ans;
         
    
      
    }
};