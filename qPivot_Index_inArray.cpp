
#include <iostream>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& arr) 
    {
        int sum=0;
         int n = arr.size();
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        int lsum=0;
        int rsum=sum;
       

        for(int i=0;i<n;i++){
            rsum = rsum-arr[i];
            if(lsum==rsum){
                return i;
            }
            
            lsum = lsum+arr[i];
        }
          return -1;
    }
};