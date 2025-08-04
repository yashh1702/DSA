//Binary search using recursion

#include<iostream>

using namespace std;

int binarySearch(int arr[],int size, int s, int e, int target){
    //base case
    if(s > e){
        //element not found
        return -1;
    }

    int mid = s + (e-s)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] < target){
        //right me jao
        return binarySearch(arr,size,mid + 1,e,target);
    }
    else{
         return binarySearch(arr,size,s,mid-1,target); 
    }
}

int main(){
    int arr[] = {10};
    int size = 1;
    int target = 10;
    int s = 0;
    int e = size-1;
    int ans = binarySearch(arr,size,s,e,target);
   if(ans != -1){
    cout<<"target found at:"<<ans<<endl;
   }
   else{
    cout<<"target not found"<<endl;
   }
}