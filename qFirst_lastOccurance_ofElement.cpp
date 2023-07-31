#include<iostream>
using namespace std;

int firstOccur(int arr[],int size,int key){
    int s=0;
    int e = size-1;
    int mid = (s+e)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid] == key){
           ans = mid;
           e = mid-1;
        }
        else if(arr[mid]<key){  //right me jao
          s = mid +1;
        }
        else{
            e = mid-1;   //left me jao
        }
        mid = (s+e)/2;
        
    }
    return ans;
}
int lastOccur(int arr[],int size,int key){
    int s=0;
    int e = size-1;
    int mid = (s+e)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid] == key){
           ans = mid;
           s = mid+1;
        }
        else if(arr[mid]<key){  //right me jao
          s = mid +1;
        }
        else{
            e = mid-1;   //left me jao
        }
        mid = (s+e)/2;
        
    }
    return ans;
}


int main(){
int arr[5] = {1,2,3,3,9};
int key;
cin>>key;
cout<<"first occurance of element is";
cout<<firstOccur(arr,5,key);

}