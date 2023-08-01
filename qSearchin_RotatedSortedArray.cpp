#include <iostream>
using namespace std;
int getPivot(vector<int>& nums,int size){
    int s = 0;
    int e  = size-1;
    int mid = (s+e)/2;

    while(s<e){
        if(nums[mid] >=nums[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
         mid = (s+e)/2;
    }
    return s;
}


int binarySearch(vector<int>& nums,int s,int e,int key){
    
    int mid = (s+e)/2;

    while(s<=e){
        if(nums[mid] == key){
            return mid;
        }
        else if(nums[mid]<key){
          s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
        
    }
    return -1;
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums,nums.size());
        int e = nums.size() - 1;
        if(nums[pivot]<= target && target <= nums[e]){
            return binarySearch(nums,pivot,e,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};