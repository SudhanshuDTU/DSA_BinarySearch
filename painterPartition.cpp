#include<iostream>
using namespace std;

class Solution
{
  public:
  bool isPossible(int arr[],int n,int k,long long mid){
      int painterCount = 1;
      int areaSum = 0;
      for(int i=0;i<n;i++){
          if(areaSum + arr[i] <= mid){
              areaSum = areaSum + arr[i];
          }
          else{
              painterCount++;
              if(painterCount>k || arr[i]>mid){
                  return false;
              }
              areaSum =0;
              areaSum = areaSum + arr[i];
          }
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {
       long long s = 0;
       long long sum=0;
       for(int i=0;i<n;i++){
           sum = sum+arr[i];
       }
       
       long long e = sum;
       long long mid = (s+e)/2;
       long long ans = -1;
       
       while(s<=e){
           if(isPossible(arr,n,k,mid)){
               ans = mid;
               e=mid-1;
           }
           else{
               s=mid+1;
           }
           mid= (s+e)/2;
       }
       
       return ans;
    }
};