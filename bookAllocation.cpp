#include<iostream>
using namespace std;


class Solution 
{
    public:
    
    bool isPossible(int arr[],int n,int m,int mid){
        int studentCount = 1;
        int pageSum =0;
        
        for(int i=0;i<n;i++){
            if(pageSum + arr[i] <= mid){
                pageSum = pageSum + arr[i];
            }
            else{
                studentCount++;
                if(studentCount > m || arr[i]>mid){
                    return false;
                }
                pageSum =0;
                pageSum = pageSum + arr[i];
            }
            
        }
        return true;
        
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(N<M){
            return -1;
        }
       int s=0;
       int sum = 0;
       for(int i=0;i<N;i++){
           sum = sum + A[i];
       }
       int e = sum;
       int ans =  -1;
       
       int mid = (s+e)/2;
       while(s<=e){
           if(isPossible(A,N,M,mid)){
               ans = mid;
               e = mid-1;
           }
           else{
               s = mid + 1;
           }
           
           mid = (s+e)/2;
       }
       return ans;
       
       
    }
};