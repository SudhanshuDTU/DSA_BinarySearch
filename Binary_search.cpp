#include<iostream>
using namespace std;

int firstOccur(int arr[],int size,int key){
    int s=0;
    int e = size-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
          s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
        
    }
    return -1;
}


int main(){
int arr[5] = {1,2,3,8,9};
int key;
cin>>key;
cout<<firstOccur(arr,5,key);

}